#include <iostream>
#include <algorithm>

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

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int k = i + 1; k < r; k++){
                for(int p = j + 1; p < c; p++){
                    if(grid[i][j] != grid[k][p]){
                        jump++;
                        for(int h = k + 1; h < r; h++){
                            for(int g = p + 1; g < c; g++){
                                if(grid[k][p] != grid[h][g]){
                                    jump++;

                                    for(int z = h + 1; z < r; z++){
                                        for(int x = g + 1; x < c; x++){
                                            if(grid[h][g] != grid[z][x]){
                                                if(jump == 2){
                                                    count++;
                                                }
                                                

                                            }
                                            
                                            // else {
                                            //     jump--;
                                            // }
                                        }
                                    }
                                    
                                }
                                // else {
                                //     jump--;
                                // }
                            }
                        }
                    }
                    // else {
                    //     jump = 0;
                    // }
                }
            }
           jump = 0; 
        }
    }

    cout << count;

    return 0;
}