#include <iostream>

#define MAX_NUM 100

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, m, t, atari = -1;
    int student_num[MAX_NUM];
    int punishment_num[MAX_NUM] = {};

    cin >> n >> m >> k;

    for(int i = 0; i < n; i++){
        student_num[i] = i + 1;
    }

    for(int i = 0; i < m; i++){
        cin >> t;

        punishment_num[t - 1] += 1;

        if(punishment_num[t - 1] >= k){
            atari = t;
            break;
        }
    }

    cout << atari;

    return 0;
}