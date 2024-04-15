#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string n;
    int num = 0, count = 0;
    int arr[100];

    cin >> n;

    for(int i = 0; i < n.length(); i++){
        num = num * 2 + (int)(n[i] - '0');
    }

    num *= 17;

    while(1){
        if(num < 2){
            arr[count++] = num;
            break;
        }
        arr[count++] = num % 2;
        num /= 2;
    }

    for(int i = count  - 1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}