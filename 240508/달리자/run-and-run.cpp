#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 0;
    int a[101];
    int tmp[101];
    int b[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        if(a[i] > b[i]){
            answer += a[i] - b[i];
            a[i + 1] += a[i] - b[i];
        }
    }

    cout << answer;

    return 0;
}