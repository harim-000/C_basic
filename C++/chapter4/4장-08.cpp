#include <iostream>

// 4장 예제 08: switch 메뉴
int main() {
    char menu = 'B';
    switch (menu) {
    case 'A': std::cout << "Americano\n"; break;
    case 'B': std::cout << "Latte\n"; break;
    default: std::cout << "잘못된 메뉴\n";
    }
    return 0;
}
