#include <iostream>

#define MAX_NUM 1000000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, v, t, count = 0;
    int a[MAX_NUM + 1], b[MAX_NUM + 1];
    string honor;
    int a_time = 0, b_time = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> v >> t;

        for(int j = 0; j < t; j++){
            if(a_time != 0){
                a[a_time] = a[a_time - 1] + v;
            }
            else {
                a[a_time] = v;
            }

            a_time++;
        }
    }

    for(int i = 0; i < m; i++){
        cin >> v >> t;

        for(int j = 0; j < t; j++){
            if(b_time != 0){
                b[b_time] = b[b_time - 1] + v;
            }
            else {
                b[b_time] = v;
            }

            b_time++;
        }
    }

    if(a[0] > b[0]){
        honor = "a";
    }
    else if (a[0] < b[0]){
        honor = "b";
    }
    else {
        honor = "ab";
    }
    count++;

    for(int i = 1; i < b_time; i++){
        if(a[i] > b[i]){
            if(honor != "a"){
                honor = "a";
                count++;
            }
        }
        else if(b[i] > a[i]){
            if(honor != "b"){
                honor = "b";
                count++;
            }
        }
        else {
            if(honor != "ab"){
                honor = "ab";
                count++;
            }
        }
    }

    cout << count;

    return 0;
}