#include <iostream>

void EvenThanos(int *a, int len){
    for(int i = 0; i < len; i++){
        if(a[i] % 2 == 0){
            a[i] /= 2;
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

    EvenThanos(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}