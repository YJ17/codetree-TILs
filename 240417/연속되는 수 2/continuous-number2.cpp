#include <iostream>

#define MAX_NUM 1000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, count = 0, max = 0;
    int arr[MAX_NUM + 1];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i] == arr[i - 1]){
            count++;
        }
        else if(arr[i] != arr[i - 1]) {
            count = 1;
        }

        if(max < count){
            max = count;
        }
    }


    cout << max;

    return 0;
}