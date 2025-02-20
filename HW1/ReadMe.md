# DIP Homework 1

## Overview
This project provides three image processing functionalities:
1. **Horizontal Flip**
2. **Quantization Resolution Adjustment**
3. **Scaling**

All output images are stored in the `output/` directory.

## Files Structure
```sh
|-- inc/           # Header files
|-- src/           # Source files
|-- obj/           # Compiled object files (generated during compilation)
|-- output/        # Output images (generated after execution)
|-- flip.cpp       # Horizontal flip implementation
|-- qr.cpp         # Quantization resolution implementation
|-- scale.cpp      # Scaling implementation
|-- Makefile       # Build automation script
|-- hw1_109511207.pdf  # Report for DIP HW1
```

## Prerequisites
- Put all files into an unix-based workstation
- g++ compiler

## Compilation
To compile all source files, run the following command:
```sh
make
```
This will compile all source files and generate three executable files: FLIP, QR, and SCALE.

## Execution
1. Horizontal Flip
To process an image with horizontal flipping, use:
```sh
make exe_flip
```

2. Quantization Resolution Adjustment
To process an image with quantization resolution adjustment, use:
```sh
make exe_qr
```

3. Scaling
To process an image with scaling, use:
```sh
make exe_scale
```

## Clean Up
To remove all compiled object files and generated output images, run:
```sh
make exe_clean
```
This will delete the obj/ and output/ directories as well as the executable files.

## Report
The file [hw1_109511207.pdf](https://github.com/therealczr15/NYCU_DIP_2023F/blob/main/HW1/hw1_109511207.pdf) contains the report for DIP Homework 1.
