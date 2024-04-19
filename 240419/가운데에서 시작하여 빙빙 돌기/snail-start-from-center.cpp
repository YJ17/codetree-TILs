#include <iostream>

using namespace std;

int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};
int range_s;

bool InRange(int x, int y, int n){
    int c = 0;
    for(int i = 3; i <= 100; i+=2){
        c++;
        if(n <= (i * i)){
            break;
        }
    }

    return x >= range_s - c && x <= range_s + c && y >= range_s - c && y <= range_s + c;

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