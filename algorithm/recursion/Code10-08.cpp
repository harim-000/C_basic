#include <iostream>
#include <string>

std::string tab;

int power(int x, int n) {
    tab += "  ";
    if (n == 0) return 1;
    std::cout << tab << x << " * " << x << "^(" << n - 1 << ")\n";
    return x * power(x, n - 1);
}

int main() {
    std::cout << "2^4\n";
    std::cout << "답 -> " << power(2, 4) << '\n';
}
