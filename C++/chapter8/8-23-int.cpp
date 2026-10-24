#include <iostream>
using namespace std;

int Func(int arg)
{
	cout << "int: " << arg << endl;
}

double Func(int arg)	// Error
{
	cout << "double: " << arg << endl;
}

int main(void)
{
	Func(1);
	return 0;
}
