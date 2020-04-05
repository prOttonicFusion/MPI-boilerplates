!
! MPI Boilerplate for Fortran
! @Author  : Otto Lindblom
! @Link    : https://github.com/prOttonicFusion/MPI-boilerplates
!

program mpi_boilerplate

use mpi
implicit none

  integer, parameter :: tag = 50
  integer :: numproc, rank, namelength, ierr
  character(len=22) :: procname = "MPI_MAX_PROCESSOR_NAME"

  ! Initialize MPI
  call mpi_init(ierr)
  if (ierr /= 0) then 
    print *, "MPI initialization failed"
  end if

  ! Query process information
  call mpi_comm_size(MPI_COMM_WORLD, numproc, ierr);       ! numproc = number of processes/CPUs
  call mpi_comm_rank(MPI_COMM_WORLD, rank, ierr);          ! rank = id of current process
  call mpi_get_processor_name(procname, namelength, ierr); ! procname = name of current process

  ! 
  ! * MPI code goes here * *
  ! 
  ! Typical commands include: 
  ! 
  ! Send/receive data:
  ! call mpi_send(void* data, int count, MPI_Datatype datatype, int destination, int tag, MPI_Comm communicator, ierr)
  ! call mpi_recv(void* data, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm communicator, MPI_Status* status, ierr)
  ! 
  ! Reduce data from all processes to one (e.g. global sum when using op = MPI_SUM):
  ! call mpi_reduce(void* send_data, void* recv_data, int count, MPI_Datatype datatype, MPI_Op op, int rootProcID, MPI_Comm communicator, ierr)
  ! 
  ! Send data to all processes:
  ! call mpi_bcast(void* data, int count, MPI_Datatype datatype, int rootProcID, MPI_Comm communicator, ierr)
  ! 

  ! Finalize MPI & quit program
  call mpi_Finalize(ierr)

end program mpi_boilerplate
