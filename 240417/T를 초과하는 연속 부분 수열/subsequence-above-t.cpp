#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, t, count = 0, max = 0;
    int arr[1000];

    cin >> n >> t;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > t){
            count++;
        }
        else {
            count = 0;
        }

        if(max < count){
            max = count;
        }
    }

    cout << max;

    return 0;
}