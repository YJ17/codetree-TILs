#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a, b;
    int count = 0;
    bool poss = false;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
        a = a.substr(a.length()-1, 1) + a.substr(0, a.length()-1);
        count++;
        if(a == b){
            break;
            poss = true;
        }
    }

    if(poss == true){
        cout << count;
    }
    else {
        cout << -1;
    }

    return 0;
}