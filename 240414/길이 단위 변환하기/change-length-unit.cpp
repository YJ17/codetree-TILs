#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    double a = 9.2, b = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << a << "ft = " << a * 30.48 << "cm" << endl;
    cout << b << "mi = " << b * 160934 << "cm";

    return 0;
}