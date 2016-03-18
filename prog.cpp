#include <iostream>

using namespace std;

double addFour(double x);

int main()
{
	cout << "Here is an example program to test Git/Github." << endl;
	cout << "A second line." << endl;
	cout << "And a third line." << endl;

	double p = 3.6;
	cout << "Running the function addFour on " << p << " results in " <<
		addFour(p) << "." << endl;

	char q = cin.get();
}

double addFour(double x)
{
	return(x + 4.0);
}