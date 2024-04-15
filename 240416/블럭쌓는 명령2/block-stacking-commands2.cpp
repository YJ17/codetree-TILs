#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, a, b, max = 0;
    int arr[100] = {};

    cin >> n >> k;

    for(int i = 0; i < k; i++){
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            arr[i] += 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}