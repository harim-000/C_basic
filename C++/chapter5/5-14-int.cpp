#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int* p = &a;
	int** pp = &p;

	**pp = 3;
	cout << a << endl;
	return 0;
}
