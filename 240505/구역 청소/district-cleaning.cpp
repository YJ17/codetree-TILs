#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a <= c && a <= d && c <= b && d <= b){
        cout << b - a;
    }
    else if(c <= a && c <= b && a <= d && b <= d){
        cout << d - c;
    }
    else if(a <= d && d <= b){
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