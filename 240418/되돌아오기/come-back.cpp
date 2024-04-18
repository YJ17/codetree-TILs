#include <iostream>

using namespace std;

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};

int Setdir(char c){
    if(c == 'E'){
        return 0;
    }
    else if(c == 'W'){
        return 1;
    }
    else if(c == 'S'){
        return 2;
    }
    else {
        return 3;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, l, dir;
    char d;
    int x = 0, y = 0, sec = 0;
    bool state = false;

    cin >> n;

    for(int i = 0;  i < n; i++){
        cin >> d >> l;
        dir = Setdir(d);

        for(int g = 0; g < l; g++){
            x += dx[dir];
            y += dy[dir];
            sec += 1;

            if(x == 0 && y == 0){
                cout << sec;
                state = true;
                break;
            }
        }
        if(state == true){
            break;
        }
    }

    if(state == false){
        cout << -1;
    }

    return 0;
}