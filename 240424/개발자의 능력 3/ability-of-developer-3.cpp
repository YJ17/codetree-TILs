#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[6];
    int min_val = INT_MAX, sum = 0, max_sum = 0;

    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        max_sum += arr[i];
    }

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 6; k++){
                sum = arr[i] + arr[j] + arr[k];

                min_val = min(abs((max_sum - sum) - sum), min_val);
            }
        }
    }

    cout << min_val;

    return 0;
}