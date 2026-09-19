#include <iostream>

int factorial(int num) {
    if (num <= 1) {
        std::cout << "1 반환\n";
        return 1;
    }
    std::cout << num << " * " << num - 1 << "! 호출\n";
    int retVal = factorial(num - 1);
    std::cout << num << " * " << num - 1 << "!(=" << retVal << ") 반환\n";
    return num * retVal;
}

int main() {
    std::cout << "\n5! = " << factorial(5) << '\n';
}
