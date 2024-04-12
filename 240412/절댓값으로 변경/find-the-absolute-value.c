#include <stdio.h>

void JulDae(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            arr[i] = -arr[i];
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[51];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    JulDae(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}