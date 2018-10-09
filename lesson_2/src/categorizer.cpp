#include "categorizer.hpp"


using namespace std;
unsigned int histogramm[256];
main(int argc, char** args)
{


	fstream f;
	ofstream out("histogram.txt");

	int width, height;
	width = 0;
	height = 0;
	char PGM_HDR1[2];
	if (argc ==1)
	{
		cout << "please specify ur file(S)" << endl;
		return 1;
		
	}

	for (int i = 1; i < argc; i++)
	{
		
	}


	cout << "give me a bottle of rum!" << endl;
	return 0;
}
