#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0;
    int x[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x[i][0] >> x[i][1];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i)
                continue;

            if((x[i][0] >= x[j][0] && x[i][1] <= x[j][1]) || (x[j][0] >= x[i][0] && x[j][1] <= x[i][1])){
                count++;
            }
        }
    }

    cout << n - count;

    return 0;
}