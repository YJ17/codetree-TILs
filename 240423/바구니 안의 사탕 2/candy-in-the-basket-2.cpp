#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, index, candy, sum = 0, max_val = -1;
    int arr[101] = {};

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> candy >> index;
        arr[index] = candy;
    }

    for(int i = k; i <= 100 - k; i++){
        for(int j = i - k; j <= i + k; j++){
            sum += arr[j];
        }
        max_val = max(sum, max_val);
        sum = 0;
    }

    cout << max_val;

    return 0;
}