#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = -1;
    string ori;

    cin >> n >> ori;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(ori[i] == '1' || ori[j] == '1'){
                continue;
            }

            ori[i] = '1';
            ori[j] = '1';

            int sub = 101;
            for(int a = 0; a < n - 1; a++){
                for(int b = a + 1; b < n; b++){
                    if(ori[a] == '1' && ori[b] == '1'){
                        sub = min(sub, b - a);
                    }
                }
            }

            answer = max(sub, answer);

            ori[i] = '0';
            ori[j] = '0';
        }
    }

    cout << answer;

    return 0;
}