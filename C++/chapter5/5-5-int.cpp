#include <iostream>
using namespace std;

int main(void)
{
	int a = 0;
	char* s = (char*)&a;

	*(s + 0) = 'C';
	*(s + 1) = '+';
	*(s + 2) = '+';
	*(s + 3) = '\0';

	cout << (char*)&a << endl;
	return 0;
}
