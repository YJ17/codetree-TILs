#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[100];
    int i = 2;

    scanf("%d", &n);

    arr[0] = 1;
    arr[1] = n;
    printf("%d %d ", arr[0], arr[1]);

    while(1){
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
        if(arr[i] > 100){
            break;
        }
        i++;
    }

    return 0;
}