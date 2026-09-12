/*******************************************************************
 * 파일명 : chapter2-1-5.cpp
 * 2장 1교시 5번째 실습파일
 * 주제   : [실습] sizeof로 자료형 크기 확인하기
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.2 자료형
 *
 * 실습미션 : 각 자료형의 실제 크기를 sizeof 연산자로 확인한다.
 * 추가도전 : sizeof(wchar_t)의 크기도 확인해 보자.
 * 참고사항 : 결과는 컴파일러/운영체제(32비트·64비트)에 따라 달라질 수
 *            있다. 교재는 32비트 환경 기준이다.
 *******************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "short int: " << sizeof(short int) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;

    return 0;
}

/* 실행 결과 예시 (64비트 환경)
char: 1 bytes
int: 4 bytes
short int: 2 bytes
long int: 8 bytes
float: 4 bytes
double: 8 bytes
bool: 1 bytes
*/
