#include <iostream>

using namespace std;

int n;

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 &&  y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int t, count = 0, x, y, check = 0;
    int grid[101][101];
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < 4; k++){
                x = i + dx[k];
                y = j + dy[k];
                if(InRange(x, y) && grid[x][y] == 1){
                    count++;
                }
            }
            if(count >= 3){
                check++;
            }
            count = 0;
        }
    }

    cout << check;


    return 0;
}