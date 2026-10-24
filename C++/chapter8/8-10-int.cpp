#include <iostream>
using namespace std;

void Increment(int& arg)
{
	arg++;
}

int main(void)
{
	int i = 3;
	Increment(i);
	cout << i << endl;	// 4 출력
	return 0;
}
