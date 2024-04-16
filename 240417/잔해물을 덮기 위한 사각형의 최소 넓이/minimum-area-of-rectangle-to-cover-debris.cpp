#include <iostream>

#define OFFSET 1000
#define MAX_AREA 2000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x1, y1, x2, y2, count = 0, index = 1;
    int minx = 2001, miny = 2001, maxx = -1001, maxy = -1001;
    int grid[MAX_AREA + 1][MAX_AREA + 1] = {};

    for(int i = 0; i < 2; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                grid[x][y] = index;
            }
        }

        index += 1;
    }


    for(int x = 0; x < MAX_AREA; x++){
        for(int y = 0; y < MAX_AREA; y++){
            if(grid[x][y] == 1){
                if(minx > x){
                    minx = x;
                }
                else if(maxx < x){
                    maxx = x;
                }

                if(miny > y){
                    miny = y;
                }
                else if(maxy < y){
                    maxy = y;
                }
                
            }
        }
    }

    for(int x = minx; x < maxx + 1; x++){
        for(int y = miny; y < maxy + 1; y++){
            grid[x][y] = 3;
        }
    }

    for(int x = 0; x < MAX_AREA; x++){
        for(int y = 0; y < MAX_AREA; y++){
            if(grid[x][y] == 3){
                count++;
            }
        }
    }    

    cout << count;

    return 0;
}