#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, answer = -1;
    int arr[1001];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int min_val = arr[i];
        int count = 0;
        for(int j = 0; j < n; j++){
            int sub = 0;
            if(arr[j] < min_val)
                continue;

            sub = arr[j] - min_val;
            if(sub <= k){
                count++;
            }
            
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}