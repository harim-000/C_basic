#include <iostream> 
using namespace std;

int main(void)
{
	int a;

	int* p = &a;
	*p = 1;
	/*
	lea		rax, [a]
	mov		qword ptr[p], rax
	mov		rax, qword ptr[p]
	mov		dword ptr[rax], 2
	*/
	cout << a << endl;

	int& ra = a;
	ra = 2;
	/*
	lea		rax, [a]
	mov		qword ptr[ra], rax
	mov		rax, qword ptr[ra]
	mov		dword ptr[rax], 1
	*/
	cout << a << endl;
	return 0;
}