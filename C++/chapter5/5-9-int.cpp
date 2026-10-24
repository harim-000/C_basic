#include <iostream>
using namespace std;

class CTest
{
	char arr[16];
};

int main(void)
{
	CTest t;
	
	CTest* pT = &t;
	cout << pT << endl;

	pT++;
	cout << pT << endl;

	pT++;
	cout << pT << endl;
	return 0;
}
