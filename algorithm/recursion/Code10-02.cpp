#include <iostream>

int boxCount = 10;

void openBox() {
    std::cout << "종이 상자를 엽니다. ^^\n";
    --boxCount;
    if (boxCount == 0) {
        std::cout << "** 반지를 넣고 반환합니다. **\n";
        return;
    }
    openBox();
    std::cout << "종이 상자를 닫습니다. ^^\n";
}

int main() {
    openBox();
}
