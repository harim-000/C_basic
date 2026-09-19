#include <iostream>

// 4장 예제 12: 1부터 합
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    std::cout << sum << '\n';
    return 0;
}
