#include <iostream>
using namespace std;

int main(void)
{
	int* pI = NULL;
	double* pD = NULL;
	
	cout << (void*)((char*)pI + 1) << endl;
	cout << (void*)((char*)pD + 1) << endl;
	return 0;
}
