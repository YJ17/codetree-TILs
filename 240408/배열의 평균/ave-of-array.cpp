#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[2][4];
    int sum = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &arr[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        printf("%.1f ", (float)sum/4);
        sum = 0;
    }
    printf("\n");

    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 2; i++){
            sum += arr[i][j];
        }
        printf("%.1f ", (float)sum/2);
        sum = 0;
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }

    printf("%.1f", (float)sum/8);

    return 0;
}