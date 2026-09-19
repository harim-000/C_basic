#include <iostream>

// 4장 예제 06: 중첩 if
int main() {
    int age = 20;
    bool hasId = true;
    if (age >= 19) {
        if (hasId) std::cout << "입장 가능\n";
    }
    return 0;
}
