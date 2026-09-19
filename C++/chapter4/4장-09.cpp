#include <iostream>

// 4장 예제 09: while 카운트
int main() {
    int count = 1;
    while (count <= 5) {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << '\n';
    return 0;
}
