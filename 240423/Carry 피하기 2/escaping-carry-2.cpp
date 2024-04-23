#include <iostream>

using namespace std;

bool IsNotCarry(int a, int b, int c){
    int cal;
    while(a != 0 || b != 0 || c != 0){
        cal = (a % 10) + (b % 10) + (c % 10);
        a = a / 10;
        b = b / 10;
        c = c / 10;

        if(cal >= 10){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max = -1, sum = 0;
    int arr[21];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n-2; i++){
        for(int k = i + 1; k < n-1; k++){
            for(int j = k + 1; j < n; j++){
                if(IsNotCarry(arr[i], arr[k], arr[j])){
                    sum = arr[i] + arr[k] + arr[j];
                }
                if(max < sum){
                    max = sum;
                }
                sum = 0;
            }
        }
    }

    cout << max;

    return 0;
}