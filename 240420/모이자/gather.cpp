#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, min = INT_MAX, sum = 0;
    int arr[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i){
                if(i > j){
                    sum += (i - j)*arr[j];
                }
                else {
                    sum += (j - i)*arr[j];
                }
            }
        }
        if(sum < min){
            min = sum;
        }
        sum = 0;
    }

    cout << min;

    return 0;
}