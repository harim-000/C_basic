#include <iostream>

// 4장 예제 16: 중첩 반복문
int main() {
    for (int row = 1; row <= 3; ++row) {
        for (int col = 1; col <= 4; ++col) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    return 0;
}
