#include <iostream>
using namespace std;

int main(void)
{
	int arr[2] = {1, 2};
	int* p = arr;
	cout << *p << ", " << *arr << endl;
	return 0;
}
