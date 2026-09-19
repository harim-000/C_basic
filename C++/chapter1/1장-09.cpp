#include <iostream>
#include <string>

// 1장 예제 09: 입력받아 인사
int main() {
    std::string name;
    std::cout << "이름: ";
    std::getline(std::cin, name);
    std::cout << name << "님, 반갑습니다.\n";
    return 0;
}
