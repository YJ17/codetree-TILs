#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int s, n, sum = 0, answer = 10000;
    int arr[101];

    cin >> n >> s;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = 0; k < n; k++){
                if(k != i && k != j){
                    sum += arr[k];
                }
            }
            int max_s = max(sum, s);
            int min_s = min(sum, s);
            if(answer > max_s - min_s){
                answer = max_s - min_s;
            }
            sum = 0;
        }
    }

    cout << answer;

    return 0;
}