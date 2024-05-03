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

        seat[new_index] = '2';

        int dis_l, dis_r, big = -1;
        for(int j = new_index - 1; j >= 0; j--){
            if(seat[j] == '1'){
                dis_l = new_index - j;
                break;
            }
        }

        for(int j = new_index + 1; j < n; j++){
            if(seat[j] == '1'){
                dis_r = j - new_index;
                break;
            }
        }

        if(dis_l != 1 && dis_r != 1){
            big = max(dis_l, dis_r);
            answer = max(big, answer);
        }

        seat[new_index] = '0';
    }

    cout << answer;

    return 0;
}