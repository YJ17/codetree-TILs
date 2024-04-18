#include <iostream>

using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int grid[101][101] = {};
    int x = 0, y = 0, tx, ty, dir = 0;

    cin >> n >> m;
    grid[0][0] = 1;

    for(int i = 2; i <= n * m; i++){
        tx = x + dx[dir];
        ty = y + dy[dir];

        if(InRange(tx, ty) != true || grid[tx][ty] != 0){
            dir = (dir + 1) % 4;
        }

        x += dx[dir], y += dy[dir];
        grid[x][y] = i;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}