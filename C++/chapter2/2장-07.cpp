#include <iostream>

// 2장 예제 07: 문자 코드
int main() {
    char ch = 'A';
    std::cout << ch << "의 코드: " << static_cast<int>(ch) << '\n';
    return 0;
}
