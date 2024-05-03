#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, answer = -1;
    int ab[101][2];

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> ab[i][0] >> ab[i][1];
    }

    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            int count = 0;
            for(int k = 0; k < m; k++){
                if((ab[k][0] == i && ab[k][1] == j) || (ab[k][0] == j && ab[k][1] == i)){
                    count++;
                }
            }
            answer = max(answer, count);
        }
    }

    cout << answer;

    return 0;
}