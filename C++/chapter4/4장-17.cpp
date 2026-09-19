#include <iostream>

// 4장 예제 17: 약수 찾기
int main() {
    int number = 24;
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
