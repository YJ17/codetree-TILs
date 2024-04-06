#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[101];
    
    for(int i = 0 ; i < 100; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0){
            printf("%d", arr[i - 1] + arr[i - 2] + arr[i - 3]);
            break;
        }
    }


    return 0;
}