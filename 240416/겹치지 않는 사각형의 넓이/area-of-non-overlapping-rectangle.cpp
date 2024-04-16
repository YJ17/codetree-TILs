#include <iostream>

#define OFFSET 1000
#define MAX_AREA 2000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x1, x2, y1, y2, count = 0;
    int grid[MAX_AREA + 1][MAX_AREA + 1] = {};

    for(int i = 0; i < 2; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                grid[x][y] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;

    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for(int x = x1; x < x2; x++){
        for(int y = y1; y < y2; y++){
            if(grid[x][y] == 1){
                grid[x][y] = 0;
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