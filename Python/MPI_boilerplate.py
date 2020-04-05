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
tag = 50


#
# * * MPI code goes here * *
#
# Typical commands include: 
#
# Send/receive data:
# Comm.send(data, dest=destination, tag=tag)
# data = Comm.recv(source=source, tag=tag)
#
# Reduce data from all processes to one (e.g. global sum when using op = MPI.SUM):
# Comm.Reduce(data, reducedData, op=MPI_OPERATOR, root=rootProcRank)
#
# Send data to all processes:
# Comm.Bcast(data, root=rootProcRank) 
#