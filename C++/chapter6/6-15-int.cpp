#include <iostream>
using namespace std;

int main(void)
{
	int arr[2][3] = { { 11, 12, 13 }, { 21, 22, 23 } };

	int* arrM[2] = { arr[0], arr[1] };
	int** pp = arrM;
	cout << pp[1][2] << endl;
	return 0;
}
