#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, t, s = 0, a_i = 0, b_i = 0;
    int a[100000], b[100000];
    char d;
    bool connect = false;

    for(int i = 0; i < 100000; i++){
        a[i] = b[i] = -100000;
    }

    cin >> n >> m;


    for(int i = 0; i < n; i++){
        cin >> d >> t;

        if(s != 0){
            t = s + t - 1;
        }
        else {
            t += s;
        }

        if(d == 'R'){
            for(s; s <= t; s++){
                if(s != 0){
                    a_i = a[s - 1] + 1;
                }

                a[s] = a_i;
            }
        }
        else {
            for(s; s <= t; s++){
                if(s != 0){
                    a_i = a[s - 1] - 1;
                }
                
                a[s] = a_i;
            }
        }
    }

    s = 0;
    for(int i = 0; i < m; i++){
        cin >> d >> t;

        if(s != 0){
            t = s + t - 1;
        }
        else {
            t += s;
        }

        if(d == 'R'){
            for(s; s <= t; s++){
                if(s != 0){
                    b_i = b[s - 1] + 1;
                }

                b[s] = b_i;
            }
        }
        else {
            for(s; s <= t; s++){
                if(s != 0){
                    b_i = b[s - 1] - 1;
                }
                
                b[s] = b_i;
            }
        }
    }

    for(int i = 1; i < 1000; i++){
        if(a[i] != -100000 && b[i] != -100000 && a[i] == b[i]){
            cout << i;
            connect = true;
            break;
        }
        else if(a[i] == -100000 && b[i] == -100000){
            break;
        }
    }

    if(connect != true){
        cout << -1;
    }

    return 0;
}