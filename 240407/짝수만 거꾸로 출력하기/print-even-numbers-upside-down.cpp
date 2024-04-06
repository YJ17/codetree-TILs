#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = n-1; j >= 0; j--){
        if(arr[j] % 2 == 0){
            printf("%d ", arr[j]);
        }
    }

    return 0;
}