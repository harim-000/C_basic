#include <iostream>

void printStar(int n) {
    if (n > 0) {
        printStar(n - 1);
        for (int i = 0; i < n; ++i) std::cout << "*";
        std::cout << '\n';
    }
}

int main() {
    printStar(5);
}
