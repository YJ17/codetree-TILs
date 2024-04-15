#include <iostream>
#include <string>

using namespace std;

bool IsPalin(string &s){
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] != s[s.length() - 1 -i]){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    string arr;

    cin >> arr;

    if(IsPalin(arr)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}