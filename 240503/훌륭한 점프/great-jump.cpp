#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, answer = 101, input_max = -1;
    int arr[101];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        input_max = max(input_max, arr[i]);
    }

    for(int a = input_max; a >= 1; a--){
        int jump[101] = {};
        int index = 0;
        int max_val = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] <= a){
                jump[index++] = i;
                max_val = max(max_val, arr[i]);
            }
        }

        bool tolong = false;
        for(int i = index - 1; i > 0; i--){
            if(jump[i] - jump[i - 1] > k){
                tolong = true;
            }
        }

        if(jump[0] == 0 && jump[index - 1] == n - 1 && tolong != true){
            answer = min(answer, max_val);
        }

    }

    cout << answer;

    return 0;
}