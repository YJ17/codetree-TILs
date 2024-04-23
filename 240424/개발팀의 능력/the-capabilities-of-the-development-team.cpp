#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max_sum = 0, min_val = INT_MAX, sum_i = 0, sum_a = 0, sum_sub = 0;
    int arr[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        max_sum += arr[i];
    }

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            for(int a = 0; a < 4; a++){
                for(int b = a + 1; b < 5; b++){
                    if(i != a && i != b && j != a && j != b && a != i && a != j && b != i && b != j){
                        sum_i = arr[i] + arr[j];
                        sum_a = arr[a] + arr[b];
                        sum_sub = max_sum - sum_a - sum_i;

                        if(sum_i != sum_a && sum_a != sum_sub && sum_sub != sum_i){
                            int max_3 = max({sum_i, sum_a, sum_sub});
                            int min_3 = min({sum_i, sum_a, sum_sub});
                            min_val = min(min_val, max_3 - min_3);
                        }
                    }
                }
            }
        }
    }

    if(min_val == INT_MAX){
        cout << -1;
    }
    else {
        cout << min_val;
    }

    return 0;
}