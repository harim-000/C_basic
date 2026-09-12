/*******************************************************************
 * 파일명 : chapter2-1-1.cpp
 * 2장 1교시 1번째 실습파일
 * 주제   : [실습 A] char 경계값을 코드로 직접 확인하기
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.2 자료형 (심화: 비트 패턴)
 *
 * 학습목표 : 같은 비트 패턴(0x00, 0x7F, 0x80, 0xFF)이 unsigned char와
 *            char(signed)에서 각각 어떤 10진수로 읽히는지 직접 확인한다.
 * 주의사항 : (int) 캐스팅 없이 그대로 cout << u3; 라고 쓰면 숫자가 아니라
 *            '문자'로 취급되어 화면에 이상한 기호가 출력된다.
 *******************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    // 같은 비트 패턴을 unsigned char / char(signed)로 각각 저장
    unsigned char u1 = 0x00, u2 = 0x7F, u3 = 0x80, u4 = 0xFF;
    char        s1 = 0x00, s2 = 0x7F, s3 = 0x80, s4 = 0xFF;

    cout << "비트패턴\t\tunsigned char\tchar(signed)" << endl;
    cout << "00000000(0x00)\t" << (int)u1 << "\t\t" << (int)s1 << endl;
    cout << "01111111(0x7F)\t" << (int)u2 << "\t\t" << (int)s2 << endl;
    cout << "10000000(0x80)\t" << (int)u3 << "\t\t" << (int)s3 << endl;
    cout << "11111111(0xFF)\t" << (int)u4 << "\t\t" << (int)s4 << endl;

    return 0;
}

/* 실행 결과
비트패턴		unsigned char	char(signed)
00000000(0x00)	0		0
01111111(0x7F)	127		127
10000000(0x80)	128		-128
11111111(0xFF)	255		-1
*/
