# DIP Homework 4

## Overview
This project provides the functionality of Image Restoration
All output images are stored in the `output/` directory.

## Files Structure
```sh
|-- inc/               # Header files
|-- input/             # Input images
|-- output/            # Output images (generated after execution)
|-- src/               # Source files
|-- obj/               # Compiled object files (generated during compilation)
|-- IR.cpp             # Image Restoration implementation
|-- Makefile           # Build automation script
|-- hw4_109511207.pdf  # Report for DIP HW4
```

## Prerequisites
- Put all files into an unix-based workstation
- g++ compiler
- Install fftw : https://www.fftw.org/
  
Extract the downloaded installation package
```
tar -xzvf fftw-x.x.x.tar.gz
```

Enter the extracted folder
```
cd fftw-x.x.x
```

Perform the installation and configuration
```
./configure --prefix=/home/xxx/fftw-x.x.x --enable-mpi --enable-openmp --enable-threads --enable-shared MPICC=mpicc CC=gcc F77=gfortran
```

### Configuration Options
| Option             | Description                                 |
|--------------------|---------------------------------------------|
| `--prefix`         | Set the installation directory              |
| `--enable-mpi`     | Compile the MPI version of the FFTW library |
| `--enable-openmp`  | Enable OpenMP directives for parallelism    |
| `--enable-threads` | Compile the FFTW SMP thread library         |
| `--enable-shared`  | Compile shared libraries                    |
| `MPICC`            | Specify the MPI compiler for C language     |
| `CC`               | Specify the C language compiler             |
| `F77`              | Specify the Fortran 77 compiler             |

Compilation
```
make
```

Install
```
make install
```

Set environment variables
```
export LD_LIBRARY_PATH=/home/xxx/fftw-x.x.x/lib:$LD_LIBRARY_PATH
```
After saving and exiting, update the environment variables using the command: 
```
source ~/.bashrc.
```

## Compilation
To compile all source files, run the following command:
```sh
make
```
This will compile all source files and generate one executable file: IR.

## Execution
To process image restoration, use:
```sh
make exe
```

## Clean Up
To remove all compiled object files and generated output images, run:
```sh
make clean
```
This will delete the obj/ and output/ directories as well as the executable files.

## Report
The file [hw4_109511207.pdf](hw4_109511207.pdf) contains the report for DIP Homework 4.

## Results
