#include <iostream>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    std::cout << "피보나치 수 --> ";
    for (int i = 0; i < 20; ++i) std::cout << fibo(i) << ' ';
    std::cout << '\n';
}
