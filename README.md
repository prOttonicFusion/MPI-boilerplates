# MPI-boilerplates
Boilerplate code for creating parallel programs in a few different languages

## C++

Compilation:
```
mpic++ MPI_boilerplate.cpp -o MPI_program
```

Running (on 4 processors):
```
mpirun -n 4 MPI_program
```


## Python

Running (on 4 processors): 
```
mpirun -n 4 python MPI_boilerplate.py
```