#!/usr/bin/env python
# -*- coding: utf-8 -*-
# MPI Boilerplate for Python
# @Author  : Otto Lindblom
# @Link    : https://github.com/prOttonicFusion/MPI-boilerplates

from mpi4py import MPI

comm = MPI.COMM_WORLD       # Communicator
rank = comm.Get_rank()      # ID of current process
numProc = comm.Get_size     # Number of processes/CPUs
procName = comm.Get_name()  # Name of current process

#
# * MPI code goes here *
#

print("{} {}".format(rank, procName))
