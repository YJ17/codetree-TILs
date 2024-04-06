#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[11];

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 3 == 0){
            printf("%d", arr[i-1]);
            break;
        }
    }

    return 0;
}