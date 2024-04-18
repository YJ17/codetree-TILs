#include <iostream>
#include <string>

using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // 여기에 코드를 작성해주세요.

    int x = 0, y = 0, dir = 0, i = 0;
    string quest;

    cin >> quest;

    for(i; i < (int)quest.size(); i++){
        if(quest[i] == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(quest[i] == 'R'){
            dir  = (dir + 1) % 4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }

        if(x == 0 && y == 0){
            break;
        }
    }

    if(i == (int)quest.size() - 1){
        cout << -1;
    }
    else {
        cout << i + 1;
    }

    return 0;
}