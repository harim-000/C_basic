#include <iostream>

// 4장 예제 07: switch 요일
int main() {
    int day = 3;
    switch (day) {
    case 1: std::cout << "월요일\n"; break;
    case 2: std::cout << "화요일\n"; break;
    case 3: std::cout << "수요일\n"; break;
    default: std::cout << "기타 요일\n";
    }
    return 0;
}
