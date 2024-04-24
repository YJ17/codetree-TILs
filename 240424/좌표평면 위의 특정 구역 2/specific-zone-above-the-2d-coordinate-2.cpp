#include <iostream>
#include <algorithm>

#define MAX_NUM 40000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = MAX_NUM * MAX_NUM;
    int xy[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> xy[i][0] >> xy[i][1];
    }

    for(int i = 0; i < n; i++){
        int min_x = MAX_NUM + 1, max_x = -1;
        int min_y = MAX_NUM + 1, max_y = -1;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }

            min_x = min(min_x, xy[j][0]);
            max_x = max(max_x, xy[j][0]);
            min_y = min(min_y, xy[j][1]);
            max_y = max(max_y, xy[j][1]);
        }
        answer = min(answer, (max_x - min_x) * (max_y - min_y));
    }

    cout << answer;

    return 0;
}