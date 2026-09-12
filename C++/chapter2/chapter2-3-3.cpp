/*******************************************************************
 * 파일명 : chapter2-3-3.cpp
 * 2장 3교시 3번째 실습파일
 * 주제   : extern "C"로 C 코드 호출하기 (+ 실제 충돌 사례)
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.4 C++에서 C 코드 호출
 *
 * 학습목표 : ① extern "C"로 지정한 함수가 정상적으로 호출된다는 것을
 *              확인한다.
 *            ② extern "C" 함수는 C++의 함수 중복(overloading)을 지원
 *              하지 않는다는 것을 실제 컴파일 오류로 확인한다.
 * 참고사항 : 실무에서는 보통 별도의 .c 파일로 작성된 함수를 extern "C"로
 *            선언해서 가져다 쓴다. 여기서는 개념 이해를 위해 편의상
 *            같은 파일 안에 작성했다.
 *******************************************************************/
#include <iostream>
#include <cstdio>
using namespace std;

// 실제로는 별도의 .c 파일에 있는 함수라고 가정 (데모를 위해 같은 파일에 작성)
extern "C" int cfun(int a, int b)   // C 스타일로 컴파일되도록 지정
{
    int c = a + b;
    printf("C 코드 영역 실행 결과: %d\n", c);
    return c;
}

int main(void)
{
    int x = cfun(100, 200);
    cout << "C++ 코드 영역 실행 결과: " << x << endl;

    // 아래 2줄의 주석을 지우고 다시 컴파일해 보세요! (파일 맨 위, extern "C" int cfun 선언 아래에 추가)
    //
    //     extern "C" double cfun(double a, double b) { return a + b; }
    //
    // 주석을 해제하면 아래와 같은 컴파일 오류가 발생합니다 (g++ 기준):
    //
    //     error: conflicting declaration of C function 'double cfun(double, double)'
    //     note: previous declaration 'int cfun(int, int)'
    //
    // [원인] C++은 매개변수가 다르면 같은 이름의 함수를 여러 개 만드는
    //        '함수 중복(overloading)'을 지원하지만, C는 이를 지원하지
    //        않는다. extern "C"로 선언한 함수는 'C 방식으로 컴파일'
    //        되므로, 서로 다른 매개변수를 가진 같은 이름의 함수를
    //        동시에 extern "C"로 선언할 수 없다.

    return 0;
}

/* 실행 결과
C 코드 영역 실행 결과: 300
C++ 코드 영역 실행 결과: 300
*/
