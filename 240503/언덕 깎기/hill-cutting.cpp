#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = INT_MAX, arr_max = -1, arr_min = 101;
    int arr[1001];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr_max = max(arr_max, arr[i]);
        arr_min = min(arr_min, arr[i]);
    }

    int sub = arr_max - arr_min;

    if(sub > 17){
        sub -= 17;

        int div = 0;
        div = sub / 2;
        sub -= div;

        int cost = div * div + sub * sub;
        answer = min(cost, answer);
    }

    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){

    //         int sub = 0;
    //         if(arr[i] > arr[j]){
    //             sub = arr[i] - arr[j];
    //         }
    //         else {
    //             sub = arr[j] - arr[i];
    //         }

    //         if(sub > 17){
    //             sub -= 17;

    //             int div = 0;
    //             div = sub / 2;
    //             sub -= div;

    //             int cost = div * div + sub * sub;
    //             answer = min(cost, answer);
    //         }
    //     }
    // }

    if(answer == INT_MAX){
        cout << 0;
    }
    else {
        cout << answer;
    }

    return 0;
}