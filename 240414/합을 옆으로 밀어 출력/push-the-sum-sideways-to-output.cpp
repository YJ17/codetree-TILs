#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, t, sum = 0;
    string a;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t;
        sum += t;
    }

    a = to_string(sum);
    a = a.substr(1, a.length() - 1) + a.substr(0, 1);

    cout << a;


    return 0;
}