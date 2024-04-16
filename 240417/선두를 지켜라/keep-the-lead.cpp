#include <iostream>

#define MAX_NUM 1000000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, v, t, h = 0;
    int a[MAX_NUM], b[MAX_NUM];
    int count = 0;
    char check;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> v >> t;

        for(int j = 0; j < t; j++){
            if(h != 0){
                a[h] = a[h - 1] + v;
            }
            else{
                a[h] = v;
            }
            h++;
        }
    }

    h = 0;
    for(int i = 0; i < m; i++){
        cin >> v >> t;

        for(int j = 0; j < t; j++){
            if(h != 0){
                b[h] = b[h - 1] + v;
            }
            else{
                b[h] = v;
            }
            h++;
        }
    }

    if(a[0] > b[0]){
        check = 'a';
    }
    else {
        check = 'b';
    }

    for(int i = 1; i < h; i++){
        if(a[i] > b[i]){
            if(check != 'a'){
                check = 'a';
                count++;
            }
        }
        else {
            if(check != 'b'){
                check = 'b';
                count++;

            }
        }
    }

    cout << count;

    return 0;
}