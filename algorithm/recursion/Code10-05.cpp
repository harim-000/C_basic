#include <iostream>

void countDown(int n) {
    if (n == 0) {
        std::cout << "발사!!\n";
        return;
    }
    std::cout << n << '\n';
    countDown(n - 1);
}

int main() {
    countDown(5);
}
