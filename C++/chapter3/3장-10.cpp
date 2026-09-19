#include <iostream>

// 3장 예제 10: 논리 OR
int main() {
    bool weekend = false;
    bool holiday = true;
    std::cout << std::boolalpha << (weekend || holiday) << '\n';
    return 0;
}
