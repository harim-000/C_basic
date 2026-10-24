#include <iostream>
using namespace std;

typedef struct STag
{
	int m;
	char* str;
} SType;

int main(void)
{
	SType s;
	s.m = 2017;
	s.str = "C++";

	cout << s.m << " " << s.str << endl;
	return 0;
}
