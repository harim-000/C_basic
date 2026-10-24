#include <iostream>
using namespace std;

int main(void)
{
	const int& ra = 1;
	int* p = (int*)&ra;
	*p = 2;
	cout << ra << endl;
	return 0;
}
