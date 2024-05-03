#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, answer = 0, max_count = -1;
    int min_num = 1000001, max_num = -1;
    int arr[101];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        min_num = min(min_num, arr[i]);
        max_num = max(max_num, arr[i]);
    }

    for(int i = min_num; i <= max_num; i++){
        int bomb[101] = {};
        int count = 0;
        for(int a = 0; a < n - 1; a++){
            for(int b = a + 1; b < n; b++){
                if(arr[a] == i && arr[b] == i){
                    if(b - a <= k){
                        bomb[a] = 1;
                        bomb[b] = 1;
                    }
                }
            }
        }
        for(int k = 0; k < n; k++){
            if(bomb[k] == 1){
                count++;
            }
        }

        if(count == 0 && max_count == -1){
            answer = 0;
        }
        else if(max_count < count){
            max_count = count;
            answer = i;
        }
        else if(max_count == count){
            if(answer < i){
                answer = i;
            }
        }
    }

    cout << answer;


    return 0;
}