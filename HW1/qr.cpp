# ifndef QR_CPP
# define QR_CPP
# include "BMP.h"

using namespace std;

int main()
{
	BMP bmp;
	
	// input1.bmp
	bmp.read("input/input1.bmp");
	bmp.show();	
	bmp.quan(2);
	bmp.write("output/output1_1.bmp");
	bmp.quan(4);
	bmp.write("output/output1_2.bmp");
	bmp.quan(6);
	bmp.write("output/output1_3.bmp");
	
	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.show();	
	bmp.quan(2);
	bmp.write("output/output2_1.bmp");
	bmp.quan(4);
	bmp.write("output/output2_2.bmp");
	bmp.quan(6);
	bmp.write("output/output2_3.bmp");
	return 0;
}

# endif