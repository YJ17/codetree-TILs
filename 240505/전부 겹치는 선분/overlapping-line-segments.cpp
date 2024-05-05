#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int info[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> info[i][0] >> info[i][1];
    }

    bool state = true;
    for(int i = 0; i < n - 1; i++){
        if(info[i][1] < info[i + 1][0] || info[i + 1][1] < info[i][0]){
            state = false;
            break;
        }
    }

    if(state){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}