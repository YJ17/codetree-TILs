#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int low = 1001, high = -1, answer = -1;
    int n, c, g, h;
    int temp[1001][2];

    cin >> n >> c >> g >> h;

    for(int i = 0; i < n; i++){
        cin >> temp[i][0] >> temp[i][1];
        low = min(temp[i][0], low);
        high = max(temp[i][1], high);
    }

    for(int i = low; i <= high; i++){
        int work = 0;
        for(int j = 0; j < n; j++){
            if(i < temp[j][0]){
                work += c;
            }
            else if(temp[j][0] <= i && i <= temp[j][1]){
                work += g;
            }
            else if(temp[j][1] <= i){
                work += h;
            }
        }
        answer = max(answer, work);
    }

    cout << answer;

    return 0;
}