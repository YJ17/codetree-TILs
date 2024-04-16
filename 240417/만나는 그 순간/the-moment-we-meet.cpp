#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, t, s = 0, a_i = 0, b_i = 0;
    int a[1000001], b[1000001];
    char d;
    bool connect = false;

    for(int i = 0; i < 1000001; i++){
        a[i] = b[i] = -1000001;
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

    for(int i = 1; i < 1000001; i++){
        if(a[i] != -1000001 && b[i] != -1000001 && a[i] == b[i]){
            cout << i;
            connect = true;
            break;
        }
        else if(a[i] == -1000001 && b[i] == -1000001){
            break;
        }
    }

    if(connect != true){
        cout << -1;
    }

    return 0;
}