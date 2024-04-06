#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[11];
    int i = 0;

    for(i; i < 9; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0){
            break;
        }
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }

    return 0;
}