/**
 * MPI Boilerplate for C++
 * @Author  : Otto Lindblom
 * @Link    : https://github.com/prOttonicFusion/MPI-boilerplates
*/

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


  /**
   * 
   * * MPI code goes here * *
   * 
   * Typical commands include: 
   * 
   * Send/receive data:
   * MPI_Send(void* data, int count, MPI_Datatype datatype, int destination, int tag, MPI_Comm communicator)
   * MPI_Recv(void* data, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm communicator, MPI_Status* status)
   * 
   * Reduce data from all processes to one (e.g. global sum when using op = MPI_SUM):
   * MPI_Reduce(void* send_data, void* recv_data, int count, MPI_Datatype datatype, MPI_Op op, int rootProcID, MPI_Comm communicator)
   * 
   * Send data to all processes:
   * MPI_Bcast(void* data, int count, MPI_Datatype datatype, int rootProcID, MPI_Comm communicator)
   * 
  */


  // Finalize MPI & quit program
  MPI_Finalize();
  return (0);
}
