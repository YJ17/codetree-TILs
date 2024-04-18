#include <iostream>

using namespace std;

int dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0};
int n;

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int SetDir(char d){
    if(d == 'U'){
        return 3;
    }
    else if(d == 'D'){
        return 0;
    }
    else if(d == 'R'){
        return 1;
    }
    else {
        return 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int r, c, t, dir;
    char d;

    cin >> n >> t;
    cin >> r >> c >> d;
    dir = SetDir(d);
    r -= 1;
    c -= 1;

    for(int i = 0; i < t; i++){
        r += dx[dir];
        c += dy[dir];

        if(InRange(r, c) != true){
            dir = 3 - dir;
            r += dx[dir];
            c += dy[dir];
        }
    }

    cout << r+1 << " " << c+1;

    return 0;
}