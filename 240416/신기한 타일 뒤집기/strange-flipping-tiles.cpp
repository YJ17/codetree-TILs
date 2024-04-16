#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, cw = 0, cb = 0;
    int arr[10001] = {};
    int index = 5000;
    char d;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m >> d;

        for(int i = 1; i <= m; i++){
            if(d == 'R'){
                arr[index] = 2;
                if(i != m){
                    index++;
                }
            }
            else {
                arr[index] = 1;
                if(i != m){
                    index--;
                }
            }
        }
    }

    for(int i = 0; i < 10000; i++){
        if(arr[i] == 1){
            cw++;
        }
        else if(arr[i] == 2) {
            cb++;
        }
    }

    cout << cw << " " << cb;

    return 0;
}