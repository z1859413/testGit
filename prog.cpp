#include <iostream>

using namespace std;

double addFour(double x);

double addZ(double x, double y);

int main()
{
	cout << "Here is an example program to test Git/Github." << endl;
	cout << "A second line." << endl;
	cout << "And a third line." << endl;

	double p = 3.6;
	double r = 10.0;
	cout << "Running the function addFour on " << p << " results in " <<
		addFour(p) << "." << endl
		 << "Running the function addY on " << p << " results in " <<
		addZ(p, r) << "." << endl;

	char q = cin.get();
}

double addFour(double x)
{
	return(x + 4.0);
}

double addZ(double x, double z) { 
	return(x + z);
}