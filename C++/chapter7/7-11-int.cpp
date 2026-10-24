#include <iostream>
using namespace std;

#include <stddef.h>

typedef struct STag
{
	char c;
	int i;
} SType;

int main(void)
{
	int OffsetC = offsetof(SType, c);
	int OffsetI = offsetof(SType, i);
	
	cout << "c Offset:" << OffsetC << endl;
	cout << "i Offset:" << OffsetI << endl;
	return 0;
}
