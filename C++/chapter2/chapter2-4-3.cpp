/*******************************************************************
 * 파일명 : chapter2-4-3.cpp
 * 2장 4교시 3번째 실습파일
 * 주제   : 형식플래그(setiosflags/resetiosflags) + 해제를 빠뜨렸을 때
 * 과목   : 객체지향프로그래밍Ⅰ (한양대학교 미래인재교육원)
 * 참고   : C++ 프로그래밍(이시현, D.B.Info) 3.2 C++ 입·출력 객체
 *
 * 학습목표 : ① setiosflags()로 설정한 형식은 resetiosflags()로 반드시
 *              해제해야 한다는 것을 정상 동작으로 확인한다.
 *            ② 해제를 빠뜨리면 실제로 어떤 문제가 생기는지 직접
 *              실행해서 눈으로 확인한다 (교재 그림 3.7과 동일한 상황).
 *******************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int DATA = 16;

    // ── 올바른 사용: 설정 후 반드시 해제 ────────────────────────
    cout << "[올바른 사용]" << endl;
    cout << setiosflags(ios::showbase) << resetiosflags(ios::dec);
    cout << setiosflags(ios::oct) << DATA << resetiosflags(ios::oct) << endl;  // 020
    cout << setiosflags(ios::hex) << DATA << resetiosflags(ios::hex) << endl;  // 0x10
    cout << DATA << endl;  // 해제했으므로 다시 10진수로 정상 출력: 16
    cout << endl;

    // ── 해제를 빠뜨린 경우 (아래 3줄의 주석을 지우고 다시 컴파일해 보세요!) ──
    //
    //     cout << "[해제를 빠뜨린 경우]" << endl;
    //     cout << setiosflags(ios::oct) << DATA << endl;   // resetiosflags(ios::oct)를 빠뜨림!
    //     cout << DATA << endl;   // 10진수 16을 기대하지만...
    //
    // 주석을 해제하고 실행하면 두 번째 출력도 여전히 "020"으로 나옵니다.
    // [원인] resetiosflags(ios::oct)를 호출하지 않았기 때문에 8진수 설정이
    //        스트림에 그대로 남아있고, 그 뒤의 모든 출력에 계속 영향을
    //        줍니다. 이것이 교재 그림 3.7의 '비정상적인 실행결과'입니다.
    // [해결] setiosflags()로 설정한 조건은 반드시 resetiosflags()로
    //        짝을 맞춰 해제해야 한다. (2주차 3차시의 new/delete 짝
    //        맞추기 원칙과 같은 맥락이다.)

    return 0;
}

/* 실행 결과 (현재 상태 그대로 컴파일한 경우)
[올바른 사용]
020
0x10
16
*/
