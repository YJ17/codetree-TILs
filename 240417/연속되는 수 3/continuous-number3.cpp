#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max = 0, count = 0;
    int arr[1000];

    cin >> n;

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(i >= 1 && arr[i] > 0 && arr[i - 1] > 0){
            count++;
        }
        else if(arr[i] < 0 && arr[i - 1] < 0){
            count++;
        }
        else {
            count = 1;
        }

        if(max < count){
            max = count;
        }
    }

    cout << max;

    return 0;
}