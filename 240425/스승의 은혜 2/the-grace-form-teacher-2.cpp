#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, b, answer = -1;
    int cost_list[1001];

    cin >> n >> b;

    for(int i = 0; i < n; i++){
        cin >> cost_list[i];
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                sum += cost_list[j] / 2;
            }
            else {
                sum += cost_list[j];
            }
            count++;

            if(sum > b){
                answer = max(answer, count - 1);
            }
        }
    }

    cout << answer;

    return 0;
}