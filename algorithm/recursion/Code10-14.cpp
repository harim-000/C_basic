#include <iostream>
#include <random>

// 색상 값을 함께 출력해 전체 원 프랙탈의 호출 구조를 확인합니다.
void drawColorCircle(int x, int y, int r, std::mt19937& gen) {
    std::uniform_int_distribution<int> color(0, 255);
    std::cout << "circle: center=(" << x << ", " << y << "), radius=" << r
              << ", RGB=(" << color(gen) << ", " << color(gen) << ", " << color(gen) << ")\n";
    if (r >= 5) {
        drawColorCircle(x - r / 2, y, r / 2, gen);
        drawColorCircle(x + r / 2, y, r / 2, gen);
    }
}

int main() {
    std::mt19937 gen(std::random_device{}());
    drawColorCircle(64, 64, 64, gen);
}
