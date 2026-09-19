#include <iostream>

// 4장 예제 18: 소수 판별
int main() {
    int number = 29;
    bool prime = number >= 2;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) { prime = false; break; }
    }
    std::cout << std::boolalpha << prime << '\n';
    return 0;
}
