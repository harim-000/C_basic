#include <iostream>

// 2장 예제 18: 형 변환
int main() {
    int total = 7;
    int people = 2;
    double average = static_cast<double>(total) / people;
    std::cout << average << '\n';
    return 0;
}
