#include <iostream>

// 4장 예제 14: continue
int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) continue;
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
