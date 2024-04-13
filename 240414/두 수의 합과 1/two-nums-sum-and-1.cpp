#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, sum, count = 0;
    string arr;

    cin >> a >> b;

    sum = a + b;
    arr = to_string(sum);

    for(int i = 0; i < arr.length(); i++){
        if(arr[i] == '1'){
            count++;
        }
    }

    cout << count;

    return 0;
}