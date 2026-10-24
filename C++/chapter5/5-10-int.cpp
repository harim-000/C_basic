#include <iostream>
using namespace std;

class CTest
{
public:
	int m_i;
	double m_d;
};

int main(void)
{
	CTest t;

	CTest* pT = &t;
	pT->m_i = 1;
	pT->m_d = 3.141592;

	cout << t.m_i << endl;
	cout << t.m_d << endl;
	return 0;
}
