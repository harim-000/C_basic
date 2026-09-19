#include <iostream>

// 4장 예제 15: break
int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 6) break;
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
