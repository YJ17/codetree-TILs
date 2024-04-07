#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[101];
    int i = 0;
    int c = 0;

    scanf("%d", &arr[0]);

    while(1){
        printf("%d ", arr[i]);
        if(arr[i] % 5 == 0){
            c++;
            if(c == 2){
                break;
            }
        }
        i += 1;
        arr[i] = arr[0] * (i+1);
    }

    return 0;
}