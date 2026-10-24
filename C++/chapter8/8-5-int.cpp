#include <iostream>
using namespace std;

void Mod(int, int);

void Sub(int arg, int m)
{
	Mod(arg - m, m);	// OK
}

void Mod(int arg, int m)
{
	if (arg < m)
	{
		cout << arg << endl;
	}
	else
	{
		Sub(arg, m);
	}
}

int main(void)
{
	Mod(11, 3);
	return 0;
}
