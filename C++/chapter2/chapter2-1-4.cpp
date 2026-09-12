/*******************************************************************
 * 파일명 : chapter2-1-4.cpp
 * 2장 1교시 4번째 실습파일
 * 주제   : 자료형 결합 규칙 확인하기 (+ 결합 불가능한 사례)
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.2 자료형
 *
 * 학습목표 : ① signed/unsigned/long/short가 어떤 자료형과 결합 가능한지
 *              직접 선언해보고 sizeof로 크기까지 확인한다.
 *            ② char는 short/long과 결합할 수 없다는 것을 실제 컴파일
 *              오류로 직접 확인한다.
 * 참고사항 : unsigned long int(또는 long int)의 크기는 32비트 환경에서는
 *            보통 4바이트이지만, 64비트 환경(대부분의 OnlineGDB 등)에서는
 *            8바이트로 나올 수 있다 — 환경에 따라 다른 것이 정상이다.
 *******************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    // ── 결합 가능한 예 ──────────────────────────────────────────
    unsigned char c = 65;          // 가능
    short int a = 100;             // 가능 (int는 생략 가능: short a;)
    unsigned long int b = 100000;  // 가능
    long double d = 3.14;          // 가능

    cout << "unsigned char c = " << (int)c << " (" << sizeof(c) << " bytes)" << endl;
    cout << "short int a = " << a << " (" << sizeof(a) << " bytes)" << endl;
    cout << "unsigned long int b = " << b << " (" << sizeof(b) << " bytes)" << endl;
    cout << "long double d = " << d << " (" << sizeof(d) << " bytes)" << endl;

    // ── 결합 불가능한 사례 ──────────────────────────────────────
    // 아래 줄의 주석(//)을 지우고 다시 컴파일해 보세요!
    //
    //     short char x;
    //
    // 주석을 해제하면 아래와 같은 컴파일 오류가 발생합니다 (g++ 기준):
    //
    //     error: 'short' specified with 'char'
    //
    // [원인] char는 이미 크기가 정해진 가장 작은 정수형이라서, 크기를
    //        늘리거나(long) 줄이는(short) 수식어와는 결합할 수 없습니다.
    //        (반면 unsigned char, signed char처럼 부호 수식어와는
    //         결합할 수 있습니다 — 위 unsigned char c 참고)

    return 0;
}

/* 실행 결과 (64비트 환경 예시 — 32비트 환경에서는 long 계열이 4바이트로 나올 수 있음)
unsigned char c = 65 (1 bytes)
short int a = 100 (2 bytes)
unsigned long int b = 100000 (8 bytes)
long double d = 3.14 (16 bytes)
*/
