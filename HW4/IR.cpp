# include "BMP.h"


using namespace std;

int main() 
{
	
	BMP bmp;
	// input1.bmp
	bmp.read("input/input1.bmp");
	bmp.show();
	bmp.restore(5, 21, 0.1);
	bmp.write("output/output1.bmp");

	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.show();
	bmp.restore(5, 19, 0.005);
	bmp.write("output/output2.bmp");
	return 0;
}