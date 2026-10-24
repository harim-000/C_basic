#include <iostream>
using namespace std;

typedef struct STag
{
	int m;
} SType;

void Func(SType arg)
{
	arg.m = 2;
	cout << arg.m << endl;
}

int main(void)
{
	SType a;
	a.m = 1;

	Func(a);

	cout << a.m << endl;
	return 0;
}
