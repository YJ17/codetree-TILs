#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0, max = 0;
    int arr[1000];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(i >= 1 && arr[i] > arr[i - 1]){
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