#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, x, y;
    int walk = 0;
    int start = 0;

    cin >> a >> b >> x >> y;

    int dis = 0;
    if(x < y && x < a){
        dis = a - x;
        if(dis < b - a){
            start = x;
            walk = a - x;
        }
    }
    else if(x > y && y < a){
        dis = a - y;
        if(dis < b - a){
            start = y;
            walk = a - y;
        }
    }

    for(int i = start; i <= b; i++){
        if(x > y && y == i){
            if(x < b){
                i = x;
            }
            else if(x - b < b - i){
                i = x;
            }
        }
        else if(x < y && x == i){
            if(y < b){
                i = y;
            }
            else if(y - b < b - i){
                i = y;
            }
        }
        else {
            walk++;
        }
    }

    cout << walk;

    return 0;
}