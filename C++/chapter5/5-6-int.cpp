#include <iostream>
using namespace std;

int main(void)
{
	char* pC = NULL;
	int* pI = NULL;
	double* pD = NULL;

	cout << (void*)(pC + 1) << endl;
	cout << (void*)(pI + 1) << endl;
	cout << (void*)(pD + 1) << endl;
	return 0;
}
