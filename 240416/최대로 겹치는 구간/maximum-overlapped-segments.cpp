#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int offset = 100;
    int n, x1, x2, max = 0;
    int arr[201] = {};

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1 >> x2;
        for(int i = x1 + 100; i <= x2 + 99; i++){
            arr[i] += 1;
        }
    }

    for(int i = 1; i <= 200; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}