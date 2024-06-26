#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, index, max_i = 0, sum = 0, max_val = -1;
    int score[10002] = {};
    char q;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> index >> q;
        max_i = max(index, max_i);
        if(q == 'G'){
            score[index] = 1;
        }
        else {
            score[index] = 2;
        }
    }

    if(max_i < k){
        for(int i = 1; i <= max_i; i++){
            sum += score[i];
        }
        max_val = sum;
    }
    else {
        for(int i = 1; i < max_i - k + 1; i++){
            for(int j = i; j <= i + k; j++){
                sum += score[j];
            }
            max_val = max(sum, max_val);
            sum = 0;
        }
    }

    cout << max_val;

    return 0;
}