#include <iostream>

// 원을 그리는 그래픽 API 대신, 재귀 호출 좌표를 콘솔에 표시합니다.
const int radius = 64;

void drawCircle(int x, int y, int r) {
    std::cout << "circle: center=(" << x << ", " << y << "), radius=" << r << '\n';
    if (r >= radius / 8) {
        drawCircle(x - r / 2, y, r / 2);
        drawCircle(x + r / 2, y, r / 2);
    }
}

int main() {
    drawCircle(radius, radius, radius);
}
