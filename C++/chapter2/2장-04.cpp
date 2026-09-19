#include <iostream>
#include <limits>

// 2장 예제 04: 정수 범위
int main() {
    std::cout << "int 최솟값: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "int 최댓값: " << std::numeric_limits<int>::max() << '\n';
    return 0;
}
