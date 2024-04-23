#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int min_val = INT_MAX, max_sum = 0, sum_i = 0, sum_a = 0, sum_sub = 0;
    int arr[6];

    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        max_sum += arr[i];
    }

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 6; j++){
            for(int a = 0; a < 5; a++){
                for(int b = a + 1; b < 6; b++){
                    if(i != a && i != b && j != a && j != b && a != i && a != j && b != i && b != j){
                        sum_i = arr[i] + arr[j];
                        sum_a = arr[a] + arr[b];
                        sum_sub = max_sum - sum_i - sum_a;

                        int max_3 = max({sum_i, sum_a, sum_sub});
                        int min_3 = min({sum_i, sum_a, sum_sub});
                        min_val = min(min_val, max_3 - min_3);
                    }
                }
            }
        }
    }

    cout << min_val;

    return 0;
}