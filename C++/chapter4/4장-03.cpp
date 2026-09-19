#include <iostream>

// 4장 예제 03: else if
int main() {
    int score = 85;
    if (score >= 90) std::cout << "A\n";
    else if (score >= 80) std::cout << "B\n";
    else std::cout << "C 이하\n";
    return 0;
}
