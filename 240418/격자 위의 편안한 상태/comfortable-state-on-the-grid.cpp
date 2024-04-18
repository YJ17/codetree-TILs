#include <iostream>

using namespace std;

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
int n;

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int m, r, c, count = 0;
    int grid[101][101] = {};

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> r >> c;
        r -= 1;
        c -= 1;
        grid[r][c] = 1;
        for(int d = 0; d < 4; d++){
            int tx = r + dx[d];
            int ty = c + dy[d];

            if(InRange(tx, ty) && grid[tx][ty] == 1){
                count++;
            }
        }
        if(count == 3){
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
        count = 0;
    }

    return 0;
}