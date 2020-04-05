# MPI-boilerplates
Boilerplate code for creating parallel programs in a few different languages using MPI. The commands listed below are from the [MPICH](https://www.mpich.org/) implementation of MPI, but [Open MPI](https://www.open-mpi.org/) should also work fine. If using Open MPI, one should replace `mpicxx` with `mpic++`.

## C++

Compilation:
```
mpicxx MPI_boilerplate.cpp -o MPI_program
```

Running (on 4 processors):
```
mpiexec -n 4 MPI_program
```


## Python

Running (on 4 processors): 
```
mpiexec -n 4 python MPI_boilerplate.py
```


## Fortran

Compilation:
```
mpifort MPI_boilerplate.f90 -o MPI_program
```

Running (on 4 processors):
```
mpiexec -n 4 MPI_program
```