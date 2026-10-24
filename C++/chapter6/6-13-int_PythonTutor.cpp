#include <iostream>
using namespace std;

int main(void)
{
	int arr[2][3] = {{ 11, 12, 13 }, { 21, 22, 23 }};
	int** pp = (int**)arr;
	cout << pp[1][2] << endl;
	return 0;
}

// 주의: 배열을 int**로 잘못 변환한 '의도적 오류 예제'입니다. 실행하면 비정상 종료(Segmentation fault)됩니다.
