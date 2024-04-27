#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, max_bom = -1;
    int arr[101];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <= n - k; i++){
        for(int j = i + 1; j < i + 1 + k; j++){
            if(arr[i] == arr[j]){
                max_bom = max(max_bom, arr[i]);
            }
        }
    }

    cout << max_bom;

    return 0;
}