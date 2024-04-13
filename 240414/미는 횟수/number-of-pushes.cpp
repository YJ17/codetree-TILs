#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a, b;
    int count = 0;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
        a = a.substr(a.length()-1, 1) + a.substr(0, a.length()-1);
        count++;
        if(a == b){
            break;
        }
    }

    if(count == 0){
        cout << -1;
    }
    else {
        cout << count;
    }

    return 0;
}