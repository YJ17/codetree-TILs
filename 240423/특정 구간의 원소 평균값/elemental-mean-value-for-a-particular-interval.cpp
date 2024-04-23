#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0;
    double sum = 0;
    double arr[101];
    bool state = false;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }

            for(int t = i; t <= j; t++){
                if(sum / (j - i + 1) == arr[t]){
                    state = true;
                }
            }
            if(state == true){
                count++;
            }
            state = false;
            sum = 0;
        }
    }

    cout << count;

    return 0;
}