#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[21][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    int num[21] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;

            if(arr[i][0] == arr[j][0] || arr[i][1] == arr[j][1]){
                num[i] = 1;
                num[j] = 1;
            }
        }
    }

    bool state = true;
    for(int i = 0; i < n; i++){
        if(num[i] != 1)
            state = false;
    }

    if(state){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}