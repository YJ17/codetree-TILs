#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, c = 0, check = 0;
    string t, temp;
    string ch[100];

    cin >> n >> k >> t;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp.substr(0, t.length()) == t){
            ch[c] = temp;
            c++;
        }
    }


    sort(ch, ch + c);

    cout << ch[k - 1];    



    return 0;
}