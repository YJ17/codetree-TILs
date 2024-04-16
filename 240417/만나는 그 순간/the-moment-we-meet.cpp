#include <iostream>

#define MAX_LEN 1000000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, t, s = 0, index = 0, meet = -1;
    int a[MAX_LEN + 1], b[MAX_LEN + 1];
    char d;

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
                    index = a[s - 1] + 1;
                }

                a[s] = index;
            }
        }
        else {
            for(s; s <= t; s++){
                if(s != 0){
                    index = a[s - 1] - 1;
                }
                
                a[s] = index;
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
                    index = b[s - 1] + 1;
                }

                b[s] = index;
            }
        }
        else {
            for(s; s <= t; s++){
                if(s != 0){
                    index = b[s - 1] - 1;
                }
                
                b[s] = index;
            }
        }
    }

    for(int i = 1; i < s; i++){
        if(a[i] == b[i]){
            meet = i;
            break;
        }
    }

    cout << meet;

    return 0;
}