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

    for(int i = arr_min; i <= (arr_max - arr_min) / 2; i++){
        for(int j = arr_max; j > (arr_max - arr_min) / 2; j--){
            int cost = 0;
            bool Isunder17 = false;
            for(int k = 0; k < n; k++){
                if(j - i > 17)
                    break;

                Isunder17 = true;
                if(arr[k] > j){
                    cost += (arr[k] - j) * (arr[k] - j);
                }
                else if(arr[k] < i){
                    cost += (i - arr[k]) * (i - arr[k]);
                }
            }
            if(Isunder17){
                answer = min(answer, cost);
            }
        }
    }
    
    cout << answer;

    return 0;
}