#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = -1;
    int arr[101][3];
    int num[3];
    int suffle[101][3];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int j = 0; j < 3; j++){
        suffle[0][j] = j + 1;
    }

    for(int j = 0; j < n; j++){    

        int temp = suffle[j][arr[j][0] - 1];
        suffle[j][arr[j][0] - 1] = suffle[j][arr[j][1] - 1];
        suffle[j][arr[j][1] - 1] = temp;

        if(j + 1 < n){
            suffle[j + 1][0] = suffle[j][0];
            suffle[j + 1][1] = suffle[j][1];
            suffle[j + 1][2] = suffle[j][2];
        }
    }

    for(int i = 1; i < 4; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i == suffle[j][arr[j][2] - 1]){
                count++;
            }
        }

        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}