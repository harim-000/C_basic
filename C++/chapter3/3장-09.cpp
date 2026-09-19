#include <iostream>

// 3장 예제 09: 논리 AND
int main() {
    bool hasId = true;
    bool hasTicket = true;
    std::cout << std::boolalpha << (hasId && hasTicket) << '\n';
    return 0;
}
