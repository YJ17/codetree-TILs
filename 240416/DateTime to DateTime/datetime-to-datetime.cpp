#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, cal;

    cin >> a >> b >> c;

    cal = (a * 24 * 60 + b * 60 + c) - (11 * 24 * 60 + 11 * 60 + 11);

    if(cal < 0){
        cout << -1;
    }
    else {
        cout << cal;
    }

    return 0;
}