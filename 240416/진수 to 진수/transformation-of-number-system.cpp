#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, num = 0, count = 0;
    string n;
    int arr[100];

    cin >> a >> b >> n;

    for(int i = 0; i < n.length(); i++){
        num = num * a + (int)(n[i] - '0');
    }

    while(1){
        if(num < b){
            arr[count++] = num;
            break;
        }
        arr[count++] = num % b;
        num /= b;
    }

    for(int i = count - 1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}