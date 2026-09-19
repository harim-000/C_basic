#include <iostream>

// 3장 예제 16: 연산자 우선순위
int main() {
    int result = 2 + 3 * 4;
    int grouped = (2 + 3) * 4;
    std::cout << result << ", " << grouped << '\n';
    return 0;
}
