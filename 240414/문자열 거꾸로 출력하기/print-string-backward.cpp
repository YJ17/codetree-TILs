#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a;

    cin >> a;

    while(a != "END"){
        for(int i = a.length() - 1; i >= 0; i--){
            cout << a[i];
        }
        cout << endl;
        cin >> a;
    }

    return 0;
}