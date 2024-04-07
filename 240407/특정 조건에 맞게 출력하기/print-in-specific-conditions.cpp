#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int i = 0;
    int arr[101];

    while(1){
        scanf("%d ", &arr[i]);
        if(arr[i] != 0 && arr[i] % 2 == 0){
            printf("%d ", arr[i] / 2);
        }
        else if (arr[i] != 0 && arr[i] % 2 != 0) {
            printf("%d ", arr[i] + 3);
        }
        else if(arr[i] == 0){
            break;
        }
        i++;
    }

    return 0;
}