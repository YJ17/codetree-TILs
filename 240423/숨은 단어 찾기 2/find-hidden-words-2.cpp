#include <iostream>

using namespace std;

int n, m;
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1}, dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

bool InRange(int x, int y){
    return x >= 0 && x < n && y >=0 && y < m;
}

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[51][51];
    int tx, ty, count = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 'L'){
                tx = i;
                ty = j;
                for(int d = 0; d < 8; d++){
                    tx = i + dx[d];
                    ty = j + dy[d];
                    if(InRange(tx, ty) && arr[tx][ty] == 'E'){
                        int ttx = tx + dx[d];
                        int tty = ty + dy[d];
                        if(InRange(ttx, tty) && arr[ttx][tty] == 'E'){
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}