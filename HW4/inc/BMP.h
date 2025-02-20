# ifndef BMP_H
# define BMP_H

// include header files
# include <iostream>
# include <cstdio>
# include <fstream>
# include <cmath>
# include <algorithm> 
# include <vector>
# include <climits>
# include <fftw3.h>

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
	    
	    // function
		bool    		read(const string filename);
		void    		show();
		bool    		write(const string filename);
		double** 		gaussianFilter(int kernelSize);
		double**		motionFilter(int kernelSize);
		double*			pad(int kernelSize, double** f);
		void			wiener(fftw_complex* f, fftw_complex* finv, double k);
		void			fMultiply(fftw_complex* fB, fftw_complex* fG, fftw_complex* fR, fftw_complex* f);
		void			restore(int gSize, int mSize, double k);
};

# endif