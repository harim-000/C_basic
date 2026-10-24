#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int* p = &a;
	*p = 1;
	cout << a << endl;
	return 0;
}
