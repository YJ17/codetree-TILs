#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c;

    cin >> a >> b >> c;

    if(a == 11){
        if(b == 11){
            if(c < 11){
                cout << -1;
            }
            else if (c == 11){
                cout << 0;
            }
        }
        else if(b < 11){
            cout << -1;
        }
        
    }
    else if(a < 11){
        cout << -1;
    }
    else if(a - 11 > 0){
        cout << (((a-11)*24)*60) + (b * 60 + c) - (11 * 60 + 11);
    }
    else {
        cout << (b * 60 + c) - (11 * 60 + 11);
    }

    return 0;
}