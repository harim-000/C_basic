#include <iostream>
#include <vector>
#include <random>

int arySum(const std::vector<int>& arr, int n) {
    if (n == 0) return arr[0];
    return arySum(arr, n - 1) + arr[n];
}

int main() {
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> countDist(20, 30);
    std::uniform_int_distribution<int> valueDist(0, 255);
    std::vector<int> ary(countDist(gen));

    std::cout << "[ ";
    for (int& value : ary) {
        value = valueDist(gen);
        std::cout << value << ' ';
    }
    std::cout << "]\n배열 합계 --> " << arySum(ary, static_cast<int>(ary.size()) - 1) << '\n';
}
