#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string t[200];
    int count = 0;

    cin >> t[count];
    count++;

    while(t[count - 1] != "0"){
        cin >> t[count];
        count++;
    }

    cout << count - 1 << endl;

    for(int i = 0; i < count - 1; i++){
        if(i % 2 == 0){
            cout << t[i] << endl;
        }
    }


    return 0;
}