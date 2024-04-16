#include <iostream>

#define OFFSET 100
#define MAX_AREA 200

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, x1, y1, count = 0;
    int grid[MAX_AREA + 1][MAX_AREA + 1] = {};

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1 >> y1;

        x1 += OFFSET;
        y1 += OFFSET;

        for(int x = x1; x < x1 + 8; x++){
            for(int y = y1; y < y1 + 8; y++){
                grid[x][y] = 1;
            }
        }
    }

    for(int x = 0; x < MAX_AREA; x++){
        for(int y = 0; y < MAX_AREA; y++){
            if(grid[x][y] == 1){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}