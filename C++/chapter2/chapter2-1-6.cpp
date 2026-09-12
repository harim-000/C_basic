/*******************************************************************
 * 파일명 : chapter2-1-6.cpp
 * 2장 1교시 6번째 실습파일
 * 주제   : bool 자료형 (boolalpha / noboolalpha)
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.6 bool 자료형
 *
 * 학습목표 : bool 변수가 기본적으로 0/1로 출력된다는 것과, boolalpha를
 *            사용하면 true/false 문자열로 출력된다는 것을 확인한다.
 *******************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    bool b1 = true;
    bool b2 = false;

    cout << b1 << " " << b2 << endl;              // 1 0
    cout << boolalpha << b1 << " " << b2 << endl;  // true false
    cout << noboolalpha << b1 << " " << b2 << endl; // 1 0

    return 0;
}

/* 실행 결과
1 0
true false
1 0
*/
