#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max_sp = INT_MIN;
    int arr[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i][0] == arr[j][0]){
                if(arr[i][1] == 0 || arr[j][1] == 0){
                    int maxy = max(arr[i][1], arr[j][1]);

                    max_sp = max(max_sp, maxy * arr[i][0]);
                }
            }
        }
    }

    cout << max_sp;

    return 0;
}