#include <iostream>
using namespace std;

int main(void)
{
	int arr[2][3];
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	return 0;
}
