#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, x1, x2, y1, y2, count = 0;
    int offset = 100;
    int grid[201][201];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                grid[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(grid[i][j] == 1){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}