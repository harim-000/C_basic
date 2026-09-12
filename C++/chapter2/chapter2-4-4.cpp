/*******************************************************************
 * 파일명 : chapter2-4-4.cpp
 * 2장 4교시 4번째 실습파일
 * 주제   : [실습] 정렬된 표 형태로 출력하기
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 3.2 C++ 입·출력 객체, 3.4 실수형의 정밀도
 *
 * 실습미션 : setw()로 폭을 맞추고 dec/oct/hex로 진법을 바꿔가며
 *            표처럼 정돈된 출력을 만든다. setprecision으로 실수형의
 *            소수 자리수도 함께 지정해 본다.
 *******************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int data = 100;

    cout << setw(12) << "10진수" << setw(12) << "8진수" << setw(12) << "16진수" << endl;
    cout << setw(12) << dec << data
         << setw(12) << oct << data
         << setw(12) << hex << data << endl;

    cout << fixed << setprecision(2);
    double pi = 3.14159265;
    cout << "pi = " << pi << endl;   // pi = 3.14

    return 0;
}

/* 실행 결과
      10진수       8진수      16진수
         100         144          64
pi = 3.14
*/
