#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a <= d && d <= b){
        cout << b - c;
    }
    else if(c <= b && a <= c){
        cout << d - a;
    }
    else {
        cout << b - a + d - c;
    }

    return 0;
}