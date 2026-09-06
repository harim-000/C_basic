#include <iostream>

using namespace std;


int main() {
    int a, b;
    cout << "첫 번째 정수: "; cin >> a;
    cout << "두 번째 정수: "; cin >> b;

    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;
    
    return 0;
}