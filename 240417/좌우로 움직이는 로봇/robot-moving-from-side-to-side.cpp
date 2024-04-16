#include <iostream>

#define MAX_LEN 1000000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, t, count = 0;
    int a_time = 0, b_time = 0;
    int a_mov[MAX_LEN + 1], b_mov[MAX_LEN + 1];
    char d;

    a_mov[a_time] = 0;
    b_mov[b_time] = 0;
    a_time++;
    b_time++;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> t >> d;

        for(int j = 0; j < t; j++){
            if(d == 'R'){
                a_mov[a_time] = a_mov[a_time - 1] + 1;
            }
            else {
                a_mov[a_time] = a_mov[a_time - 1] - 1;
            }
            a_time++;
        }
    }


    for(int i = 0; i < m; i++){
        cin >> t >> d;

        for(int j = 0; j < t; j++){
            if(d == 'R'){
                b_mov[b_time] = b_mov[b_time - 1] + 1;
            }
            else {
                b_mov[b_time] = b_mov[b_time - 1] - 1;
            }
            b_time++;
        }
    }


    if(a_time > b_time){
        int sub = a_time - b_time;
        for(int i = 0; i < sub; i++){
            b_mov[b_time] = b_mov[b_time - 1];
            b_time++;
        }
    }
    else{
        int sub = b_time - a_time;
        for(int i = 0; i < sub; i++){
            a_mov[a_time] = a_mov[a_time - 1];
            a_time++;
        }
    }

    for(int i = 1; i < a_time; i++){
        if(a_mov[i - 1] != b_mov[i - 1] && a_mov[i] == b_mov[i]){
            count++;
        }
    }

    cout << count;

    return 0;
}