#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max_sp = INT_MIN;
    int arr[101][2];
    bool state = false;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
           for(int k = j + 1; k < n; k++){
                if(arr[i][0] == arr[j][0] || arr[j][0] == arr[k][0] || arr[k][0] == arr[i][0]){
                    if(arr[i][1] == arr[j][1] || arr[j][1] == arr[k][1] || arr[k][1] == arr[i][1]){
                        state = true;
                        int cal1 = arr[i][0]*arr[j][1] + arr[j][0]*arr[k][1] + arr[k][0]*arr[i][1];
                        int cal2 = arr[j][0]*arr[i][1] + arr[k][0]*arr[j][1] + arr[i][0] *arr[k][1];

                        max_sp = max(max_sp, abs(cal1 - cal2));
                    }
                }
           }
        }
    }

    if(state == false){
        cout << 0;
    }
    else {
        cout << max_sp;
    }

    return 0;
}