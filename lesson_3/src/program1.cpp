#include "program.h"


using namespace std;
int _geek::Mult5(int a)
{
	return a*5;

}
using _geek::Mult5;

int main(int argc, char** args)
{
	int a = 2;
	
	cout << "c = "<< Mult5(a)<< endl;
	return 0;
	
}
