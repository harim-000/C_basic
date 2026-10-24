#include <iostream>
using namespace std;

#include <stdarg.h>
void VFFunc(int arg1, int arg2, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, arg2);
	double varg3 = va_arg(arg_ptr, double);
	char varg4 = va_arg(arg_ptr, char);
	char* varg5 = va_arg(arg_ptr, char*);
	va_end(arg_ptr);

	cout << arg1 << endl;
	cout << arg2 << endl;
	cout << varg3 << endl;
	cout << varg4 << endl;
	cout << varg5 << endl;
}

int main(void)
{
	VFFunc(1, 2, 3.0, '4', "Five");
	return 0;
}
