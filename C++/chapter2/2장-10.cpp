#include <iostream>
#include <iomanip>

// 2장 예제 10: 실수 출력 정밀도
int main() {
    double pi = 3.141592653589793;
    std::cout << std::fixed << std::setprecision(3) << pi << '\n';
    return 0;
}
