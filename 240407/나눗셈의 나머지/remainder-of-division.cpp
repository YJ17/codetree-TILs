#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int arr[11] = {};
    int s = 0;

    scanf("%d %d", &a, &b);

    while(a >= 1){
        arr[a % b] = a % b;
        a /= b;
    }

    for(int i = 0; i <= 10; i++){
        if(arr[i] != 0){
            s = arr[i] * arr[i];
        }
    }

    printf("%d", s);

    return 0;
}