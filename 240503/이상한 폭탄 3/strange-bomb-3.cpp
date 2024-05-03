#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, answer = 0, max_count = -1;
    int min_num = 1000001, max_num = -1;
    int arr[101];
    int num[101] = {};

    cin >> n >> k;

    int index = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        num[index++] = arr[i];
    }

    for(int i = 0; i < index; i++){
        int bomb[101] = {};
        int count = 0;
        for(int a = 0; a < n - 1; a++){
            for(int b = a + 1; b < n; b++){
                if(arr[a] == num[i] && arr[b] == num[i]){
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
            answer = num[i];
        }
        else if(max_count == count){
            if(answer < num[i]){
                answer = num[i];
            }
        }
    }

    cout << answer;


    return 0;
}