#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = INT_MAX;
    int arr[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] *= 2;
        for(int j = 0; j < n; j++){
            int temp[101] = {};
            int index = 0;
            for(int k = 0; k < n; k++){
                if(j == k)
                    continue;

                temp[index++] = arr[k];
            }

            int sum = 0;
            for(int k = 0; k < n - 2; k++){
                int maxk = max(temp[k], temp[k + 1]);
                int mink = min(temp[k], temp[k + 1]);
                sum += maxk - mink;
                
            }

            answer = min(answer, sum);
        }
        arr[i] /= 2;
    }

    cout << answer;

    return 0;
}