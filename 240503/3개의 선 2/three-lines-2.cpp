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
    int xcount = 0, ycount = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;

            if(arr[i][0] == arr[j][0]){
                if(num[arr[i][0]] == 0){
                    num[arr[i][0]] = 1;
                    xcount++;
                }
            }
            if(arr[i][1] == arr[j][1]){
                if(num[arr[i][1]] == 0){
                    num[arr[i][1]] = 1;
                    ycount++;
                }
            }
        }
    }

    if(xcount == 3 || ycount == 3 || xcount + ycount == 3){
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}