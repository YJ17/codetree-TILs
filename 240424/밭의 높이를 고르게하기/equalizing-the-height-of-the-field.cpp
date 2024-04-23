#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, h, t, cost = 0, min = INT_MAX;
    int arr[101];

    cin >> n >> h >> t;

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <= n - t; i++){
        for(int j = i; j < i + t; j++){
            if(arr[j] <= h){
                cost += h - arr[j];
            }
            else {
                cost += arr[j] - h;
            }
        }
        if(min > cost){
            min = cost;
        }
        cost = 0;
    }

    cout << min;

    return 0;
}