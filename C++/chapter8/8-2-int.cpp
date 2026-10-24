#include <iostream>
using namespace std;

int main(void)
{
	double Result = Multiply(3.3, 7.7);	// Error
	cout << Result << endl;
	return 0;
}

double Multiply(double a, double b)
{
	return a * b;
}
