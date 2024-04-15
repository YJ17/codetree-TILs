#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int num = 0;
    string binary;

    cin >> binary;

    for(int i = 0; i < binary.length(); i++){
        num = num * 2 + (int)(binary[i] - '0');
    }

    cout << num;

    return 0;
}