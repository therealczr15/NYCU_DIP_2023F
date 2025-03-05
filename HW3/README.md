# DIP Homework 3

## Overview
This project provides two image processing functionalities:
1. **Chromatic Adaptation**
2. **Image Enhancement**

All output images are stored in the `output/` directory.

## Files Structure
```sh
|-- inc/               # Header files
|-- input/             # Input images
|-- output/            # Output images (generated after execution)
|-- src/               # Source files
|-- obj/               # Compiled object files (generated during compilation)
|-- CA.cpp             # Chromatic Adaptation implementation
|-- IE.cpp             # Image Enhancement implementation
|-- Makefile           # Build automation script
|-- hw3_109511207.pdf  # Report for DIP HW3
```

## Prerequisites
- Put all files into an unix-based workstation
- g++ compiler

## Compilation
To compile all source files, run the following command:
```sh
make
```
This will compile all source files and generate two executable files: CA, IE.

## Execution
### 1. Chromatic Adaptation
To process an image with chromatic adaptation, use:
```sh
make exe_CA
```

### 2. Image Enhancement
To process an image with image enhancement, use:
```sh
make exe_IE
```

## Clean Up
To remove all compiled object files and generated output images, run:
```sh
make clean
```
This will delete the obj/ and output/ directories as well as the executable files.

## Report
The file [hw3_109511207.pdf](hw3_109511207.pdf) contains the report for DIP Homework 3.

## Results

|                          | input1.bmp                | input2.bmp                | input3.bmp                | input4.bmp                |
|:------------------------:|:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:|
| **Original**             | ![](input/input1.bmp)     | ![](input/input2.bmp)     | ![](input/input3.bmp)     | ![](input/input4.bmp)     |
| **Chromatic Adaptation** | ![](output/output1_1.bmp) | ![](output/output2_1.bmp) | ![](output/output3_1.bmp) | ![](output/output4_1.bmp) |
| **Image Enhancement**    | ![](output/output1_2.bmp) | ![](output/output2_2.bmp) | ![](output/output3_2.bmp) | ![](output/output4_2.bmp) |




