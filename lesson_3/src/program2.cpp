#include "program.h"



using namespace std;


int main(int argc, char** args)
{
	int a;
	cout << "Input num ";
	cin >> a;
	if (a>5) 
	{
		cout << "other num ";
		cin >> a;
		
	}

	if (( a > 5 )&&( a < 10)) a -= 5;
	
	else a = 5 - a;
	
	if (a == 0) cout << "ZERO"<< endl;
	else a < 0 ? cout << "NEG" << endl : cout << "POS" << endl;
	return 0;
	
}
