#include <iostream>
using namespace std;

double Multiply(double a, double b)
{
	return a * b;
}

int main(void)
{
	double Result = Multiply(3.3, 7.7);	// OK
	cout << Result << endl;
	return 0;
}
