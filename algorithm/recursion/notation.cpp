#include <array>
#include <iostream>

const std::array<char, 16> numberChar = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void notation(int base, unsigned int n) {
    if (n < static_cast<unsigned int>(base)) {
        std::cout << numberChar[n];
    } else {
        notation(base, n / base);
        std::cout << numberChar[n % base];
    }
}

int main() {
    unsigned int n;
    std::cout << "10진수 입력 --> ";
    std::cin >> n;
    for (int base : {2, 8, 16}) {
        std::cout << base << "진수 : ";
        notation(base, n);
        std::cout << '\n';
    }
}
