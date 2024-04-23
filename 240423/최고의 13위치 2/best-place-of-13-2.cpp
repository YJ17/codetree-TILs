#include <iostream>

using namespace std;

int n;

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int grid[21][21];
    int max = -1, count1 = 0, count2 = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-2; j++){
            for(int u = 0; u < 3; u++){
                if(InRange(i, j + u) && grid[i][j + u] != 0){
                    count1++;
                }
            }
            for(int k = i + 1; k < n; k++){
                for(int p = 0; p < n-2; p++){
                    for(int t = 0; t < 3; t++){
                        if(InRange(k, p + t) && grid[k][p + t] != 0){
                            count2++;
                        }
                    }
                    if(max < count1 + count2){
                        max = count1 + count2;
                    }
                    count2 = 0;
                }
            }
            count1 = 0;
        }
    }
    
    cout << max;

    return 0;
}