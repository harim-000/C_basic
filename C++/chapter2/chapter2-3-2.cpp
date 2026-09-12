/*******************************************************************
 * 파일명 : chapter2-3-2.cpp
 * 2장 3교시 2번째 실습파일
 * 주제   : [실습] malloc/free vs new/delete 비교
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.5 new와 delete
 *
 * 학습목표 : C 방식(malloc/free)과 C++ 방식(new/delete)으로 각각
 *            동적 배열을 만들어보고 두 방식을 비교한다.
 * 확인포인트 : malloc은 반환형이 void*라서 (int*)로 형변환이 필요하지만,
 *              new는 형변환 없이 바로 원하는 자료형의 포인터를 반환한다.
 *******************************************************************/
#include <iostream>
#include <cstdlib>     // malloc, free
using namespace std;

int main(void)
{
    // C 방식의 동적 할당
    int *p1 = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) p1[i] = i + 1;

    // C++ 방식의 동적 할당
    int *p2 = new int[5];
    for (int i = 0; i < 5; i++) p2[i] = (i + 1) * 10;

    for (int i = 0; i < 5; i++)
        cout << p1[i] << " " << p2[i] << endl;

    free(p1);          // C 방식 해제
    delete [] p2;       // C++ 방식 해제

    return 0;
}

/* 실행 결과
1 10
2 20
3 30
4 40
5 50
*/
