#include <iostream>

// 3장 예제 15: 비트 이동
int main() {
    unsigned int value = 3;
    std::cout << (value << 2) << '\n';
    std::cout << (value >> 1) << '\n';
    return 0;
}
