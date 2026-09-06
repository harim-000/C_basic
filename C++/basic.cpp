#include <iostream>
// C 방식 > print 할 때 자료형에 맞는 형식지정자 필요
// C++ 방식 cout 으로 사용하여 형식지정자 불필요
// namepaces
// 함수 구조체변수 이름의 '소속(범위)을 정해주는 것
// 서로 다른 라이브러리에 같은 이름이 있어도 충돌 없이 사용 하등하게 만듦
// C의 scanf > C++의 cin, printf > C++의 cout
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    //auto a = 10; // auto 키워드로 자료형 추론
    
    //std::cout << a << std::endl;

    cout << "안녕하세요!" << endl;
    cout << "저는 C++를 배우고 있습니다.\n";
    cout << "C++는 객체 지향 프로그래밍 언어입니다." << endl;
    cout << "저는 한양대학교 미래인재교육원 수강생입니다." << endl;
    return 0;
}

//   C++에서 자주 쓰는 기본 표준 라이브러리는 다음과 같습니다. 별도 설치 없이 #include로 사용할 수 있습니다.
//   #include <iostream>  // 콘솔 입출력: cout, cin
//   #include <string>    // 문자열: string
//   #include <vector>    // 동적 배열: vector > 자바를 사용해본 사람이라면 ArrayList와 비슷하다고 생각하면 됨
//   #include <array>     // 고정 크기 배열: array
//   #include <algorithm> // 정렬·검색: sort, find, reverse
//   #include <cmath>     // 수학 함수: sqrt, pow, abs
//   #include <map>       // 키-값 저장: map
//   #include <set>       // 중복 없는 값: set
//   #include <queue>     // 큐: queue, priority_queue
//   #include <stack>     // 스택: stack
//   #include <numeric>   // 합계 등: accumulate
//   #include <random>    // 난수 생성
//   #include <fstream>   // 파일 입출력

//   간단한 예제:

//   #include <algorithm>
//   #include <iostream>
//   #include <numeric>
//   #include <string>
//   #include <vector>

//   int main() {
//       std::string name;
//       std::cout << "이름: ";
//       std::cin >> name;

//       std::vector<int> numbers{5, 2, 8, 1, 4};
//       std::sort(numbers.begin(), numbers.end());

//       int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

//       std::cout << name << "님의 정렬 결과: ";

//       for (int number : numbers) {
//           std::cout << number << ' ';
//       }

//       std::cout << "\n합계: " << sum << '\n';
//       return 0;
//   }

//   터미널에서 컴파일하고 실행하려면:

//   clang++ -std=c++17 -Wall -Wextra main.cpp -o main
//   ./main

//   핵심 개념은 다음 순서로 연습하는 것이 좋습니다.

//   1. iostream으로 입력과 출력
//   2. 변수, 조건문, 반복문
//   3. 함수와 참조
//   4. string, vector
//   5. algorithm
//   6. 클래스와 객체
//   7. 포인터와 스마트 포인터
//   8. 파일 입출력
//   9. 템플릿과 예외 처리

//   처음에는 using namespace std;도 사용할 수 있지만, 이름 충돌을 피하는 습관을 들이려면 std::cout, std::vector처럼
//   std::를 직접 붙이는 편이 좋습니다. 표준 라이브러리의 헤더에는 일반적으로 .h를 붙이지 않습니다. 예를 들어
//   <iostream.h>가 아니라 <iostream>입니다.

