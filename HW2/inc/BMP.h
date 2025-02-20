# ifndef BMP_H
# define BMP_H

# include <iostream>
# include <cstdio>
# include <fstream>
# include <cmath>
# include <algorithm> 
# include <vector>

// define up scaling is true, down scaling is false
# define UP_SCAL   true
# define DOWN_SCAL false

using namespace std;

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned int   DWORD;

class BMP
{
	public:
		
		// variable
		char* 	_header;
		WORD	_identifier;			// 0x0000
		DWORD	_file_size;				// 0x0002
		DWORD	_reserved;				// 0x0006
		DWORD	_bitmap_data_offset;	// 0x000A
		DWORD	_header_size;			// 0x000E
		int		_width;					// 0x0012
	    int		_height;				// 0x0016
	    WORD	_planes;				// 0x001A
	    WORD	_bits_per_pixel;		// 0x001C
	    DWORD	_compression;			// 0x001E
	    DWORD	_bitmap_data_size;		// 0x0022
	    DWORD	_h_resolution;			// 0x0026
	    DWORD	_v_resolution;			// 0x002A
	    DWORD	_used_colors;			// 0x002E
	    DWORD	_important_colors;		// 0x0032
	    int		_channel;
	    
	    char* 	_image;
			    
	    char*	_out_header;
	    char*	_out_image;
	    
	    // function
		bool read(const string filename);
		void show();
		bool write(const string filename);
		void flip();
		void quan(int factor);
		BYTE bilinear(int i, int j, int k);
		void scal(bool up);
		void bruteForce(BYTE factor);
		void gammaCorrection(double gamma);
		void repliPadding(int i, int j, int k, BYTE PAD[3][3]);
		BYTE meanFilter(int i, int j, int k, BYTE PAD[3][3]);
		BYTE medianFilter(int i, int j, int k, BYTE PAD[3][3]);
		int  gaussianFilter(int i, int j, int k, BYTE PAD[3][3]);
		int  laplacianFilter(int i, int j, int k, BYTE PAD[3][3]);
		void sharp();
		void denoise();
};



# endif

