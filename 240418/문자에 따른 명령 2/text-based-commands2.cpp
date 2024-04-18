#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0, dir_n = 0;
    string quest;

    cin >> quest;

    for(int i = 0; i < quest.length(); i++){
        if(quest[i] == 'L'){
            dir_n = (dir_n + 3) % 4;
        }
        else if(quest[i] == 'R'){
            dir_n = (dir_n + 1) % 4;
        }
        else {
            x += dx[dir_n];
            y += dy[dir_n];
        }
    }

    cout << x << " " << y;

    return 0;
}