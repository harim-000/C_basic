#include <iostream>

// 4장 예제 04: 짝수 홀수
int main() {
    int number;
    std::cout << "정수: ";
    std::cin >> number;
    if (number % 2 == 0) std::cout << "짝수\n";
    else std::cout << "홀수\n";
    return 0;
}
