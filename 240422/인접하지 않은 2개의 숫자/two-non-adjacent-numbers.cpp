#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max = -1, sum = 0;
    int arr[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 2; j < n; j++){
            sum = arr[i] + arr[j];
            if(sum > max){
                max = sum;
            }
            sum = 0;
        }
    }

    cout << max;

    return 0;
}