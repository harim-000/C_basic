#include <iostream>

int addNumber(int num) {
    if (num <= 1) return 1;
    return num + addNumber(num - 1);
}

int main() {
    std::cout << addNumber(10) << '\n';
}
