#include <iostream>
using namespace std;

typedef struct STag
{
	char c;
	int i;
} SType;

int main(void)
{
	cout << sizeof(SType) << endl;
	return 0;
}
