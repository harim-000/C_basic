#include <iostream>
using namespace std;

void func(int arg[4])
{
	cout << sizeof(arg) << endl;	// 4 or 8
}

int main(void)
{
	int arr[4] = { 1, 2, 3, 4 };
	func(arr);
	return 0;
}
