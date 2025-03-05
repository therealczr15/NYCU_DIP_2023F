# DIP Homework 1

## Overview
This project provides three image processing functionalities:
1. **Horizontal Flip**
2. **Quantization Resolution Adjustment**
3. **Scaling**

All output images are stored in the `output/` directory.

## Files Structure
```sh
|-- inc/               # Header files
|-- src/               # Source files
|-- obj/               # Compiled object files (generated during compilation)
|-- output/            # Output images (generated after execution)
|-- flip.cpp           # Horizontal flip implementation
|-- qr.cpp             # Quantization resolution implementation
|-- scale.cpp          # Scaling implementation
|-- Makefile           # Build automation script
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
### 1. Horizontal Flip
To process an image with horizontal flipping, use:
```sh
make exe_flip
```

### 2. Quantization Resolution Adjustment
To process an image with quantization resolution adjustment, use:
```sh
make exe_qr
```

### 3. Scaling
To process an image with scaling, use:
```sh
make exe_scale
```

## Clean Up
To remove all compiled object files and generated output images, run:
```sh
make clean
```
This will delete the obj/ and output/ directories as well as the executable files.

## Report
The file [hw1_109511207.pdf](hw1_109511207.pdf) contains the report for DIP Homework 1.

## Results

<table>
  <tr>
    <th colspan="2" style="text-align:center;">Horizontal Flip</th>
  </tr>
  <tr>
    <td align="center"><b>Before Flip</b></td>
    <td align="center"><b>After Flip</b></td>
  </tr>
  <tr>
    <td style="text-align:center;"><img src="input/input1.bmp" width="500"></td>
    <td style="text-align:center;"><img src="output/output1_flip.bmp" width="500"></td>
  </tr>
  <tr>
    <td style="text-align:center;"><img src="input/input2.bmp" width="500"></td>
    <td style="text-align:center;"><img src="output/output2_flip.bmp" width="500"></td>
  </tr>
</table>

<table>
  <tr>
    <th colspan="4" style="text-align:center;">Quantization Resolution</th>
  </tr>
  <tr>
    <td align="center"><b>Before</b></td>
    <td align="center"><b>After_1</b></td>
    <td align="center"><b>After_2</b></td>
    <td align="center"><b>After_3</b></td>
  </tr>
  <tr>
    <td style="text-align:center;"><img src="input/input1.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output1_1.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output1_2.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output1_3.bmp" width="250"></td>
  </tr>
  <tr>
    <td style="text-align:center;"><img src="input/input2.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output2_1.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output2_2.bmp" width="250"></td>
    <td style="text-align:center;"><img src="output/output2_3.bmp" width="250"></td>
  </tr>
</table>

