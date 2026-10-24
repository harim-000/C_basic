#include <iostream>
using namespace std;

void Func(int* arg)
{
	cout << "int* " << endl;
}

void Func(int* const arg)		// Error
{
	cout << "int* const" << endl;
}

int main(void)
{
	int a = 1;
	Func(&a);
	return 0;
}
