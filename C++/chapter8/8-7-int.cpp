#include <iostream>
using namespace std;

int Increment(int arg)
{
	arg++;
	return arg;
}

int main(void)
{
	cout << Increment(3) << endl;
	return 0;
}
