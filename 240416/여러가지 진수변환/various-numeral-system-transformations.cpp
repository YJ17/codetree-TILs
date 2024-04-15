#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, b, count = 0;
    int arr[251];

    cin >> n >> b;

    while(1){
        if(n < b){
            arr[count++] = n;
            break;
        }
        arr[count++] = n % b;
        n /= b;
    }

    for(int i = count - 1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}