# include "BMP.h"

using namespace std;

int main()
{
	BMP bmp;
	
	// input1.bmp
	bmp.read("input/input1.bmp");
	bmp.grayWorld();
	bmp.write("output/output1_1.bmp");

	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.maxRGB();
	bmp.write("output/output2_1.bmp");

	// input3.bmp
	bmp.read("input/input3.bmp");
	bmp.maxRGB();
	bmp.write("output/output3_1.bmp");
	
	// input4.bmp
	bmp.read("input/input4.bmp");
	bmp.grayWorld();
	bmp.write("output/output4_1.bmp");
	
	return 0;
}
