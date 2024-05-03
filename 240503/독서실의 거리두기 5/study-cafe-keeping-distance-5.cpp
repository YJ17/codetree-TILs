#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = -1;
    string seat;

    cin >> n >> seat;

    int new_index = 0;
    for(int i = 0; i < n; i++){
        if(seat[i] == '1'){
            new_index = i + 1;
            continue;
        }
        else {
            new_index = i;
        }

        seat[new_index] = '1';

        int pre_index = -1;
        int len = 50;
        for(int j = 0; j < n; j++){
            if(pre_index == -1 && seat[j] == '1'){
                pre_index = j;
            }
            else if(pre_index != -1 && seat[j] == '1'){
                int sub_len = j - pre_index;
                len = min(len, sub_len);
                pre_index = j;
            }
        }

        answer = max(answer, len);
        seat[new_index] = '0';
    }

    cout << answer;

    return 0;
}