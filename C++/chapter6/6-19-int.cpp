#include <iostream>
using namespace std;

void func(int arg[2][3])
{
	arg[1][2] = 1;
}

int main(void)
{
	int arr[2][3] = { {0} };
	func(arr);
	cout << arr[1][2] << endl;
	return 0;
}
