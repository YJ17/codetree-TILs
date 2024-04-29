#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 0;
    int arr[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= 100; i++){
        int count = 0;
        for(int j = 0; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                if(arr[k] - i == i - arr[j]){
                    count++;
                }
            }
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}