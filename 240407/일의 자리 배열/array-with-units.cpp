#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int arr[11];

    scanf("%d %d", &a, &b);

    arr[0] = a;
    arr[1] = b;

    for(int i = 2; i < 10; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i] >= 10){
            arr[i] %= 10;
        }
    }

    for(int j = 0; j < 10; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}