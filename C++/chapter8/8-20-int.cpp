#include <iostream>
using namespace std;

#include <stdarg.h>
int VFSum(int Count, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, Count);

	int Sum = 0;
	for (int i = 0; i < Count; i++)
	{
		Sum += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);

	return Sum;
}

int main(void)
{
	cout << VFSum(5, 1, 10, 100, 1000, 10000) << endl;
	return 0;
}
