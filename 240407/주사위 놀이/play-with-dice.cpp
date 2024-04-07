#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int c = 0;
    int arr[11] = {};

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 1; j < 7; j++){
        for(int k = 0; k < 10; k++){
            if(arr[k] == j){
                c++;
            }
        }
        printf("%d - %d\n", j, c);
        c = 0;
    }

    return 0;
}