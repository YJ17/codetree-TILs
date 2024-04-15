#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, x, count = 0;
    char d;
    int arr[1001] = {};
    int index = 500;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> d;

        for(int i = 0; i < x; i++){
            if(d == 'R'){
                arr[index++] += 1;
            }
            else {
                arr[--index] += 1;
            }
        }
    }

    for(int i = 0; i <= 1000; i++){
        if(arr[i] >= 2){
            count++;
        }
    }

    cout << count;

    return 0;
}