#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max = -1;
    int arr[1001];
    int sort_g[1001];

    cin >> n;

    for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + 2 * n);

    for(int i = 0; i < n; i++){
        if(max < arr[i] + arr[(2 * n - 1)- i]){
            max = arr[i] + arr[(2 * n - 1)- i];
        }
    }

    cout << max;


    return 0;
}