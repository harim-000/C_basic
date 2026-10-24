#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int& ra = a;

	ra = 1;
	cout << a << endl;
	return 0;
}
