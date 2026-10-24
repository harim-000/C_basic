#include <iostream>
using namespace std;

void VFFunc(int arg1, int arg2, ...)
{
	char* p = (char*)&arg2;

#ifdef _WIN64
	cout << *(double*)(p + 8) << endl;
#else
	cout << *(double*)(p + 4) << endl;
#endif
}

int main(void)
{
	VFFunc(1, 2, 3.0, '4', "Five");
	return 0;
}
