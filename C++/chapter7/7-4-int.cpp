#include <iostream>
using namespace std;

typedef struct STag
{
	int m;
	char str1[4];
	char* str2;
} SType;

int main(void)
{
	SType s1;
	s1.m = 2017;
	memcpy(s1.str1, "C++", 4);
	s1.str2 = "World";

	SType s2;
	s2 = s1;

	cout << s2.m << " " << s2.str1 << " " << s2.str2 << endl;
	return 0;
}
