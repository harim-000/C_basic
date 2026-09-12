/*******************************************************************
 * 파일명 : chapter2-1-3.cpp
 * 2장 1교시 3번째 실습파일
 * 주제   : [도전 과제] short int(16비트) 버전으로 확장하기
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.2 자료형 (심화: 비트 패턴)
 *
 * 학습목표 : chapter2-1-2.cpp(char, 8비트)를 short(16비트)로 확장해서
 *            같은 원리가 short에도 그대로 적용된다는 것을 확인한다.
 * 실습방법 : 실행 후 1000000000000000, 1111111111111111 등
 *            16자리 이진수를 입력해 보세요.
 * 도전과제 : bitset<16>을 bitset<32>로, unsigned short/short를
 *            unsigned int/int로 바꾸면 int(32비트) 버전도 만들 수 있다.
 *******************************************************************/
#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    string bits;
    cout << "16자리 이진수를 입력하세요 (예: 1000000000000000): ";
    cin >> bits;

    bitset<16> b(bits);
    unsigned short u = (unsigned short)b.to_ulong();
    short s = (short)u;

    cout << "unsigned short로 읽으면: " << u << endl;
    cout << "short(signed)로 읽으면: " << s << endl;

    return 0;
}

/* 실행 결과 예시 (1000000000000000을 입력한 경우)
16자리 이진수를 입력하세요 (예: 1000000000000000): 1000000000000000
unsigned short로 읽으면: 32768
short(signed)로 읽으면: -32768
*/
