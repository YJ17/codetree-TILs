#include <iostream>

using namespace std;

int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};
int range_s;

bool InRange(int x, int y, int n){
    if(n <= 9){
            return x >= range_s - 1 && x <= range_s + 1 && y >= range_s - 1 && y <= range_s + 1;
        }
        else if(n <= 25){
            return x >= range_s - 2 && x <= range_s + 2 && y >= range_s - 2 && y <= range_s + 2;
        }
        else if(n <= 49){
            return x >= range_s - 3 && x <= range_s + 3 && y >= range_s - 3 && y <= range_s + 3;
        }
        else if(n <= 81){
            return x >= range_s - 4 && x <= range_s + 4 && y >= range_s - 4 && y <= range_s + 4;
        }
        else {
            return x >= range_s - 5 && x <= range_s + 5 && y >= range_s - 5 && y <= range_s + 5;
        }

    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int grid[101][101] = {};
    int n, dir = 0, num = 1, x, y; 

    cin >> n;

    range_s = n / 2;
    x = y = range_s;
        
    grid[x][y] = num;
    num++;

    for(int i = 1; i < n * n; i++){
        int tx = x + dx[dir];
        int ty = y + dy[dir];
        if(InRange(tx, ty, num) != true || grid[tx][ty] != 0){
            dir = (dir + 1) % 4;
            tx = x + dx[dir];
            ty = y + dy[dir];
        }
        x = tx;
        y = ty;
        grid[x][y] = num;
        num++;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}