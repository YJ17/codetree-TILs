#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, sum = 0, max_val = -1;
    int arr[101];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <= n - k; i++){
        for(int j = i; j < i + k; j++){
            sum += arr[j];
        }
        max_val = max(sum, max_val);
        sum = 0;
    }

    cout << max_val;

    return 0;
}