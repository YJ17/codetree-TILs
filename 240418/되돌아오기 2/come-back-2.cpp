#include <iostream>
#include <string>

using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // 여기에 코드를 작성해주세요.

    int x = 0, y = 0, dir = 0, i = 0, answer = -1;
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
            answer = i + 1;
            break;
        }
    }

    if(answer == - 1){
        cout << -1;
    }
    else {
        cout << answer;
    }

    return 0;
}