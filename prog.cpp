#include <iostream>

using namespace std;

double addFour(double x);

double addZ(double x, double y);

int main()
{
	cout << "Here is an example program to test Git/Github." << endl;
	cout << "And a third line." << endl << endl;
	cout << "I deleted the second line." << endl << endl;

	double p = 3.6;
	double r = 8.2;
	cout << "Running the function addFour on " << p << " results in " <<
		addFour(p) << "." << endl
		 << "Running the function addY on " << p << " results in " <<
		addZ(p, r) << "." << endl;
	cout << endl << "OK. It looks like things are working properly. " <<
		"I'll try another commit with " << endl << 
		"these new changes." << endl;

	char q = cin.get();
}

double addFour(double x)
{
	return(x + 4.0);
}

double addZ(double x, double z) {
	// putting a comment in here
	return(x + z);
}