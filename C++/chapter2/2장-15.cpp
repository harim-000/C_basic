#include <iostream>
#include <string>

// 2장 예제 15: 문자열 한 줄 입력
int main() {
    std::string sentence;
    std::cout << "문장: ";
    std::getline(std::cin, sentence);
    std::cout << sentence << '\n';
    return 0;
}
