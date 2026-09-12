/*******************************************************************
 * 파일명 : chapter2-3-1.cpp
 * 2장 3교시 1번째 실습파일
 * 주제   : new와 delete 기본 사용법 (일반 변수, 배열)
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 2.5 new와 delete
 *
 * 학습목표 : new로 메모리를 할당하고 delete로 해제하는 기본 문법을
 *            일반 변수와 배열 두 가지 경우로 확인한다.
 * 주의사항 : 배열로 할당한 메모리는 반드시 delete [] 형태로 해제해야
 *            한다. []를 빠뜨리면 메모리 누수(leak)가 발생할 수 있다.
 *******************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    // ① 일반 변수에서 new와 delete
    int *ptr;
    ptr = new int;          // int형 메모리 1개 할당
    *ptr = 100;
    cout << "*ptr = " << *ptr << endl;
    delete ptr;              // 메모리 삭제

    // ② 배열에서 new와 delete
    int *arr;
    arr = new int[5];        // int형 5개(배열) 메모리 할당
    for (int i = 0; i < 5; i++) arr[i] = (i + 1) * 10;
    cout << "arr: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    delete [] arr;            // 배열 메모리 삭제 (반드시 [] 표기)

    return 0;
}

/* 실행 결과
*ptr = 100
arr: 10 20 30 40 50
*/
