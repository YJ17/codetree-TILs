#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string n, m;

    cin >> n >> m;

    if(n.find(m) != string::npos){
        cout << n.find(m);
    }
    else {
        cout << -1;
    }

    return 0;
}