#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101][3];
    int num[3];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i = 1; i < 4; i++){
        int count = 0;
        int cup[3] = {};
        for(int j = 0; j < n; j++){
            if(n % 2 == 0){
                for(int k = 1; k < 4; k++){
                    cup[k - 1] = k;
                }
            }
            else {
                cup[arr[j][0] - 1] = arr[j][1];
                cup[arr[j][1] - 1] = arr[j][0];

                for(int k = 0; k < 3; k++){
                    if(cup[k] == 0){
                        if(arr[j][0] != 3 && arr[j][1] != 3){
                            cup[k] = 3;
                        }
                        else if(arr[j][0] != 2 && arr[j][1] != 2){
                            cup[k] = 2;
                        }
                        else {
                            cup[k] = 1;
                        }
                    }
                }
            }

            if(i == cup[arr[j][2] - 1]){
                count++;
            }
        }
        num[i-1] = count;
    }

    if(num[0] > num[1]){
        if(num[0] > num[2]){
            cout << 1;
        }
    }
    else if(num[1] > num[2]){
        if(num[1] > num[0]){
            cout << 2;
        }
    }
    else if(num[2] > num[1]){
        if(num[2] > num[0]){
            cout << 3;
        }
    }

    return 0;
}