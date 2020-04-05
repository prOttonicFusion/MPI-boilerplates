#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
  const int tag = 50;
  int numProc, rank, nameLenght;
  char procName[MPI_MAX_PROCESSOR_NAME];
  MPI_Status status;

  // Initialize MPI
  if (MPI_Init(&argc, &argv) != MPI_SUCCESS)
  {
    cout << "MPI initialization failed" << endl;
    return (-1);
  }

  // Query process information
  MPI_Comm_size(MPI_COMM_WORLD, &numProc);       // numProc = number of processes/CPUs
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);          // rank = id of current process
  MPI_Get_processor_name(procName, &nameLenght); // procName = name of current process

  /*
  * * MPI code goes here * *
  */

  // Finalize MPI & quit program
  MPI_Finalize();
  return (0);
}
