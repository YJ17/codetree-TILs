#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a, b;
    int count = 0;

    cin >> a >> b;

    for(int i = 0; i < a.length() - (b.length() - 1); i++){
        if(a.substr(i, b.length()) == b){
            count++;
        }
    }

    cout << count;

    return 0;
}