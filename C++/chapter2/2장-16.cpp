#include <iostream>

// 2장 예제 16: const
int main() {
    const double TAX_RATE = 0.1;
    double price = 10000;
    std::cout << price * (1 + TAX_RATE) << '\n';
    return 0;
}
