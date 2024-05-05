#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int pe_loca[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> pe_loca[i][0] >> pe_loca[i][1];
    }

    int count = 0;
    int loca[11];

    for(int i = 0; i < 10; i++){
        loca[i] = -1;
    }

    for(int i = 0; i < n; i++){
        if(loca[pe_loca[i][0]] != 1 && loca[pe_loca[i][0]] != 0){
            loca[pe_loca[i][0]] = pe_loca[i][1];
        }
        else if(loca[pe_loca[i][0]] != pe_loca[i][1]){
            loca[pe_loca[i][0]] = pe_loca[i][1];
            count++;
        }
    }

    cout << count;

    return 0;
}