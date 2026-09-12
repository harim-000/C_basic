/*******************************************************************
 * 파일명 : chapter2-1-2.cpp
 * 2장 1교시 2번째 실습파일
 * 주제   : [실습 B] 이진수를 입력받아 10진수로 변환하기 (char, 8비트)
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.2 자료형 (심화: 비트 패턴)
 *
 * 학습목표 : 8자리 이진수 문자열을 직접 입력받아, unsigned char와
 *            char(signed)로 각각 해석했을 때의 값을 눈으로 확인한다.
 * 실습방법 : 실행 후 10000000, 11111111, 01111111 등을 입력해 보세요.
 * 도전과제 : bitset<8>을 bitset<16>/bitset<32>로, unsigned char/char를
 *            unsigned short/short 또는 unsigned int/int로 바꾸면
 *            short·int 버전으로 확장할 수 있다. (chapter2-1-3.cpp 참고)
 *******************************************************************/
#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    string bits;
    cout << "8자리 이진수를 입력하세요 (예: 10000000): ";
    cin >> bits;

    bitset<8> b(bits);                              // 문자열 -> 8비트로 변환
    unsigned char u = (unsigned char)b.to_ulong();   // 그대로 unsigned로 해석
    char s = (char)u;                                // 같은 비트를 signed로 재해석

    cout << "입력한 비트 패턴: " << bits << endl;
    cout << "unsigned char로 읽으면: " << (int)u << endl;
    cout << "signed   char로 읽으면: " << (int)s << endl;

    return 0;
}

/* 실행 결과 예시 (10000000을 입력한 경우)
8자리 이진수를 입력하세요 (예: 10000000): 10000000
입력한 비트 패턴: 10000000
unsigned char로 읽으면: 128
signed   char로 읽으면: -128
*/
