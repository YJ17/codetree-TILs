#include <iostream>
#include <string>

using namespace std;

int n;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string quest;
    int grid[100][100];
    int answer[100][100] = {};
    int x, y, dir = 0, t;

    cin >> n >> t;
    cin >> quest;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    x = y = n / 2;
    answer[x][y] = 1;

    for(int i = 0; i < t; i++){
        if(quest[i] == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(quest[i] == 'R'){
            dir = (dir + 1) % 4;
        }
        else {
            int tx = x + dx[dir];
            int ty = y + dy[dir];
            if(InRange(tx, ty)){
                x = tx;
                y = ty;
                answer[x][y] = 1;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(answer[i][j] == 1){
                sum += grid[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}