#include <iostream>
#include <string>

// 3장 예제 12: 조건 연산자
int main() {
    int score = 75;
    std::string result = score >= 60 ? "합격" : "불합격";
    std::cout << result << '\n';
    return 0;
}
