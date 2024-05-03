#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 10001;
    int ab[11][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ab[i][0] >> ab[i][1];
    }

    for(int i = 1; i < 10001; i++){
        int x = i * 2;
        int count = 0;
        for(int j = 0; j < n; j++){
            if(ab[j][0] <= x && x <= ab[j][1]){
                count++;
            }
            x *= 2;
        }

        if(count == n){
            answer = i;
            break;
        }
    }

    cout << answer;

    return 0;
}