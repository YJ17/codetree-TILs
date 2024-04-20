#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max = INT_MIN, sum = 0;
    int grid[21][21];

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 2; j++){
            sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
            if(sum > max){
                max = sum;
            }
            sum = 0;
        }
    }

    cout << max;


    return 0;
}