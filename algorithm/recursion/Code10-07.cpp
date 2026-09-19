#include <iostream>

void gugu(int dan, int num) {
    std::cout << dan << " x " << num << " = " << dan * num << '\n';
    if (num < 9) gugu(dan, num + 1);
}

int main() {
    for (int dan = 2; dan < 10; ++dan) {
        std::cout << "## " << dan << "단 ##\n";
        gugu(dan, 1);
    }
}
