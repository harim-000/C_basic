#include <iostream>
using namespace std;

int Add(int& a, int& b)
{
	return a + b;
}

int main(void)
{
	int a = 1;
	int b = 2;

	cout << Add(a, b) << endl;	// OK
	cout << Add(1, 2) << endl;	// Error
	return 0;
}
