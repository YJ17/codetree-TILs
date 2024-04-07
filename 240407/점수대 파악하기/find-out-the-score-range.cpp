#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int i = 0;
    int c = 0;
    int arr[101] = {};

    while(1){
        scanf("%d ", &arr[i]);
        if(arr[i] == 0){
            break;
        }
        i++;
    }

    for(int j = 10; j >= 1; j--){
        for(int k = 0; k < i; k++){
            if(arr[k] / 10 == j){
                c++;
            }
        }
        printf("%d - %d\n", j*10, c);
        c = 0;
    }

    return 0;
}