# ifndef SE_CPP
# define SE_CPP

# include "BMP.h"

using namespace std;

int main()
{
	BMP bmp;
	
	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.show();	
	bmp.sharp();
	
	// iteration once
	bmp.write("output/output2_1.bmp");
	
	// input2.bmp
	bmp.read("input/input2.bmp");
	bmp.show();	
	
	// iteration twice
	for(int i=0;i<2;i++)
		bmp.sharp();
	bmp.write("output/output2_2.bmp");
	return 0;
}

# endif