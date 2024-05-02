#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[21][2];
    bool state = false;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    int checkx[21] = {}, checky[21] = {};
    int countx = 0, county = 0;
    int numx[11] = {}, numy[11] = {};

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i][0] == arr[j][0] && checkx[i] == 0){
                checkx[i] = 1;
                checkx[j] = 1;
            }

            if(arr[i][0] == arr[j][0] && numx[arr[i][0]] == 0){
                numx[arr[i][0]] = 1;
                countx++;
            }
        }
    }
    bool nozero = true;
    for(int i = 0; i < n; i++){
        if(checkx[i] == 0)
            nozero = false;
    }
    if(nozero == true && countx == 3){
        state = true;
    }
    else {
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i][1] == arr[j][1] && checky[i] == 0){
                    checky[i] = 1;
                    checky[j] = 1;
                    
                }

                if(arr[i][1] == arr[j][1] && numy[arr[i][1]] == 0){
                    numy[arr[i][1]] = 1;
                    county++;
                }
            }
        }
    }
    nozero = true;
    for(int i = 0; i < n; i++){
        if(checky[i] == 0)
            nozero = false;
    }
    if(nozero == true && county == 3){
        state = true;
    }
    else {
        int answer[21] = {};
        for(int i = 0; i < n; i++){
            if(checkx[i] != 0)
                answer[i] = 1;
            if(checky[i] != 0)
                answer[i] = 1;
        }

        nozero = true;
        for(int i = 0; i < n; i++){
            if(answer == 0)
                nozero = false;
        }
        if(countx <= 3 && county <= 3 && nozero == true){
            state = true;
        }
    }

    if(state){
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}