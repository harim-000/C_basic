#include <iostream>
using namespace std;

typedef union
{
	__int64 a;
	int b;
} UType;

int main(void)
{
	UType u;
	u.a = 1;

	cout << u.b << endl;		// 1 출력
	cout << sizeof(u) << endl;	// 8 출력
	return 0;
}
