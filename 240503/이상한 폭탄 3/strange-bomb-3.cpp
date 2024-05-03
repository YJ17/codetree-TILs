#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, answer = 0, max_count = -1;
    int arr[101];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < 101; i++){
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

        if(max_count < count){
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