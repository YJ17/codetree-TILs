#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, answer = -1;
    int arr[101];
    int mov[10001];

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        int s_index = i;
        for(int j = 0; j < m; j++){
            sum += arr[s_index];
            s_index = arr[s_index] - 1;
        }

        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}