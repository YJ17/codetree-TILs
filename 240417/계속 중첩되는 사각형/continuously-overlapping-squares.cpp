#include <iostream>

#define OFFSET 100
#define MAX_NUM 10
#define MAX_AREA 200

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0;
    int x1[MAX_NUM], x2[MAX_NUM], y1[MAX_NUM], y2[MAX_NUM];
    int grid[MAX_AREA + 1][MAX_AREA + 1];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET; 
    }

    for(int i = 0; i < n; i++){
        for(int x = x1[i]; x < x2[i]; x++){
            for(int y = y1[i]; y < y2[i]; y++){
                if(i % 2 == 0){
                    grid[x][y] = 0;
                }
                else {
                    grid[x][y] = 1;
                }
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