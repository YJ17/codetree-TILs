#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int can_arr[201] = {};
int n, m;
int len;
int answer = 101;

void DivArr(int index, int can, int can_len){
    can_arr[index] = -1;
    
    if(can == 0){
        int sum = 0;
        int maximum = -1;
        for(int i = 0; i < len; i++){
            if(can_arr[i] != -1){
                sum += can_arr[i];
            }
            else {
                maximum = max(maximum, sum);
                sum = 0;
            }
        }
        maximum = max(maximum, sum);
        answer = min(answer, maximum);
        can_arr[index] = 0;
        return;
    }

    can_len += 2;
    for(int i = index + 2; i < can_len; i+=2){
        DivArr(i, can - 1, can_len);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int num_arr[101];

    cin >> n >>  m;

    for(int i = 0; i < n; i++){
        cin >> num_arr[i];
    }

    len = n + (n - 1);

    int index = 0;
    for(int i = 0; i < n; i++){
        can_arr[index] = num_arr[i];
        index += 2;
    }

    int can_len = len - (2 * (m - 2));

    for(int i = 1; i < can_len ; i+=2){
        DivArr(i, m - 2, can_len);
        can_arr[i] = 0;
    }

    cout << answer;
    
    return 0;
}