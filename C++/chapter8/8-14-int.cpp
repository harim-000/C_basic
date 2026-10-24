#include <iostream>
using namespace std;

int Sum(int a = 0, int b = 0, int c = 0)
{
	return a + b + c;
}

int main(void)
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
	return 0;
}
