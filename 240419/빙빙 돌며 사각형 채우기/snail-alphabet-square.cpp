#include <iostream>

using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char grid[101][101] = {};
    int dir = 0, x  = 0, y = 0;
    char a = 'A'; 
    grid[0][0] = a;
    a++;

    cin >> n >> m;

    for(int i = 1; i < n * m; i++){
        int tx = x + dx[dir];
        int ty = y + dy[dir];
        if(InRange(tx, ty) != true || grid[tx][ty] != 0){
            dir = (dir + 1) % 4;
            tx = x + dx[dir];
            ty = y + dy[dir];
        }
        x = tx;
        y = ty;
        grid[x][y] = a;
        a++;
        if(a > 'Z'){
            a = 'A';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}