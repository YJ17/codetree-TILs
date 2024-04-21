#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int r, c, jump = 0, count = 0;
    char grid[15][15];

    cin >> r >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
        }
    }

    if(grid[0][0] == grid[r-1][c-1]){
        cout << count;
    }
    else {
        for(int i = 1; i < r - 2; i++){
            for(int j = 1; j < c - 2; j++){
                for(int x = i + 1; x < r - 1; x++){
                    for(int y = j + 1; y < c - 1; y++){
                        if(grid[i][j] != grid[x][y] && grid[0][0] != grid[i][j]){
                           count++;
                        }
                    }
                }
            }
        }
        cout << count;
    }

    return 0;
}