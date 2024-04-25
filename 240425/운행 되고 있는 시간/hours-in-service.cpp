#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0, max_val = -1;
    int start[101], end[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> start[i] >> end[i];
    }

    for(int i = 0; i < n; i++){
        int run_time[1001] = {};
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;

            for(int k = start[j]; k < end[j]; k++){
                run_time[k] = 1;
            }
        }
        
        for(int k = 0; k < 1001; k++){
            if(run_time[k] == 1){
                count++;
            }
        }
        max_val = max(max_val, count);
        count = 0;
    }

    cout << max_val;

    return 0;
}