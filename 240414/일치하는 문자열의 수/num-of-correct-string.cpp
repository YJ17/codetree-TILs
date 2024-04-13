#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0;
    string a, t;

    cin >> n >> a;

    for(int i = 0; i < n; i++){
        cin >> t;
        if(a == t){
            count++;
        }
    }

    cout << count;

    return 0;
}