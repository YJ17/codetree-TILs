#include <iostream>
#include <string>

using namespace std;

bool IfOtherMoreThen2(string &s){
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] != s[i + 1]){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.

    string s;

    cin >> s;

    if(IfOtherMoreThen2(s)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}