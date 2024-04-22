#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0, index = 0, sum = 0, min = INT_MAX;
    int arr[1004];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        index = i;
        for(int j = 0; j < n; j++){
            sum += arr[index] * count;
            count++;
            index++;
            if(index >= n){
                index = index % n;
            }
        }
        if(min > sum){
            min = sum;
        }
        sum = 0;
        count = 0;
    }

    cout << min;

    return 0;
}