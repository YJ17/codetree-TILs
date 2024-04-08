#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[25][25];

    for(int i  = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0){
                arr[i][j] = 1;
            }
            else{
                arr[i][0] = 1;
            }
        }
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}