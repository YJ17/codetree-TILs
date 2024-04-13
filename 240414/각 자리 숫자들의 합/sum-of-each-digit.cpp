#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, sum = 0;
    string a;

    cin >> n;
    a = to_string(n);

    for(int i = 0; i < a.length(); i++){
        sum += (int)a[i] - '0';
    }

    cout << sum;

    return 0;
}