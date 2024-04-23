#include <iostream>

using namespace std;

int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1}, dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

bool InRange(int x, int y){
    return x >= 0 && x < 20 && y >=0 && y < 20;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int grid[20][20];
    int temp, count = 0, tx, ty, cx, cy, winner;
    
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            for(int d = 0; d < 8; d++){
                if(grid[i][j] != 0 && grid[i + dx[d]][j + dy[d]] == grid[i][j]){
                    count = 0;
                    tx = i;
                    ty = j;
                    for(int p = 0; p < 4; p++){
                        tx = tx + dx[d];
                        ty = ty + dy[d];
                        if(InRange(tx, ty) && grid[tx][ty] == grid[i][j]){
                            count++;
                        }
                    }
                    if(count == 4){
                        winner = grid[i][j];
        
                        cx = ((i + 1) + (tx + 1)) / 2;
                        cy = ((j + 1) + (ty + 1)) / 2;
                    }
                }
            }
        }
    }

    cout << winner;
    if(winner != 0){
        cout << endl << cx << " " << cy;
    }

    return 0;
}