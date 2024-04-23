#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, count = 0, answer = 0;
    int a[101], b[101];
    int check[101] = {};
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    for(int i = 0; i <= n - m; i++){
        for(int j = i; j < i + m; j++){
            for(int k = 0; k < m; k++){
                if(a[j] == b[k]){
                    check[k] = 1;
                }
            }
        }
        for(int k = 0; k < m; k++){
            if(check[k] == 1){
                count++;
            }
        }
        if(count == m){
            answer++;
        }
        for(int k = 0; k < m; k++){
            check[k] = 0;
        }
        count = 0;
    }

    cout << answer;

    return 0;
}