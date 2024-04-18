#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};
    int n, d, x = 0, y = 0;
    char w;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> w >> d;

        if(w == 'E'){
            x += dx[0] * d;
            y += dy[0] * d;
        }
        else if(w == 'W'){
            x += dx[1] * d;
            y += dy[1] * d;
        }
        else if(w == 'S'){
            x += dx[2] * d;
            y += dy[2] * d;
        }
        else {
            x += dx[3] * d;
            y += dy[3] * d;
        }
    }

    cout << x << " " << y;

    return 0;
}