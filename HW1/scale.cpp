# ifndef SCALE_CPP
# define SCALE_CPP

# include "BMP.h"

using namespace std;

int main()
{
	BMP bmp;
	
	// input1.bmp
	bmp.read("input/input1.bmp");
	bmp.show();	
	bmp.scal(UP_SCAL);
	bmp.write("output/output1_up.bmp");
	bmp.read("input/input1.bmp");
	bmp.scal(DOWN_SCAL);
	bmp.write("output/output1_down.bmp");
	
	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.show();	
	bmp.scal(UP_SCAL);	
	bmp.write("output/output2_up.bmp");
	bmp.read("input/input2.bmp");
	bmp.scal(DOWN_SCAL);
	bmp.write("output/output2_down.bmp");
	return 0;
}

# endif