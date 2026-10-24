#include <iostream>
using namespace std;

void func(int arg)
{
	arg++;
	cout << arg << endl;
}

int main(void)
{
	int a = 1;
	func(a);
	cout << a << endl;
	return 0;
}
