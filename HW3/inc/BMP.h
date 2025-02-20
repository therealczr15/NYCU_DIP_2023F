# ifndef BMP_H
# define BMP_H

// define up scaling is true, down scaling is false
#define UP_SCAL   true
#define DOWN_SCAL false

// define _USE_MATH_DEFINES to use M_PI
#define _USE_MATH_DEFINES

// include header files
#include <iostream>
#include <cstdio>
#include <fstream>
#include <cmath>
#include <algorithm> 
#include <vector>
#include <climits>

using namespace std;

class BMP
{
	public:
		
		// variable
		char* 	_header;
		uint16_t	_identifier;			// 0x0000
		uint32_t	_file_size;				// 0x0002
		uint32_t	_reserved;				// 0x0006
		uint32_t	_bitmap_data_offset;	// 0x000A
		uint32_t	_header_size;			// 0x000E
		uint32_t	_width;					// 0x0012
	    uint32_t	_height;				// 0x0016
	    uint16_t	_planes;				// 0x001A
	    uint16_t	_bits_per_pixel;		// 0x001C
	    uint32_t	_compression;			// 0x001E
	    uint32_t	_bitmap_data_size;		// 0x0022
	    uint32_t	_h_resolution;			// 0x0026
	    uint32_t	_v_resolution;			// 0x002A
	    uint32_t	_used_colors;			// 0x002E
	    uint32_t	_important_colors;		// 0x0032
	    uint32_t	_channel;
	    
	    char* 	    _image;
	    uint8_t*    _Y;
	    uint8_t*	_Cr;
	    uint8_t*	_Cb;
	    
	    // function
		bool    	read(const string filename);
		void    	show();
		bool    	write(const string filename);
		void    	flip();
		void    	quan(int factor);
		uint8_t 	bilinear(int i, int j, int k, int oH, int oW);
		void    	scal(bool up);
		void    	YCrCb2RGB();
		void 		RGB2YCrCb();
		void		HSI2RGB(double* H, double* S, double* I);
		void		RGB2HSI(double* H, double* S, double* I);
		void    	brightnessEnhance(double alpha, double beta);
		void    	gammaCorrection(double gamma);
		void    	histEqual();
		void    	convMask3      		(int i, int j, uint8_t mask[3][3]);
		uint8_t 	laplacianAFilter	(uint8_t mask[3][3]);
		uint8_t 	laplacianBFilter	(uint8_t mask[3][3]);
		uint8_t		prewittXFilter 		(uint8_t mask[3][3]);
		uint8_t		prewittYFilter 		(uint8_t mask[3][3]);
		uint8_t		sobelXFilter		(uint8_t mask[3][3]);
		uint8_t		sobelYFilter 		(uint8_t mask[3][3]);
		uint8_t 	gaussianFilter 		(uint8_t mask[3][3]);
		uint8_t 	medianFilter   		(uint8_t mask[3][3]);
		uint8_t 	meanFilter     		(uint8_t mask[3][3]);
		void    	sharp(int mode);
		void 		denoise(int mode);
		void 		maxRGB();
		void 		grayWorld();
		void		saturationEnhance(double gamma);
};


# endif