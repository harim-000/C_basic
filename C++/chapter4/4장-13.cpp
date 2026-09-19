#include <iostream>

// 4장 예제 13: 구구단
int main() {
    int dan = 3;
    for (int i = 1; i <= 9; ++i) {
        std::cout << dan << " x " << i << " = " << dan * i << '\n';
    }
    return 0;
}
