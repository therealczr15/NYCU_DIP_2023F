# ifndef FLIP_CPP
# define FLIP_CPP

# include "BMP.h"

using namespace std;

int main()
{
	BMP bmp;
	
	// input1.bmp
	bmp.read("input/input1.bmp");	
	bmp.show();	
	bmp.flip();
	bmp.write("output/output1_flip.bmp");
	
	// input2.bmp
	bmp.read("input/input2.bmp");	
	bmp.show();	
	bmp.flip();
	bmp.write("output/output2_flip.bmp");
	return 0;
}

# endif