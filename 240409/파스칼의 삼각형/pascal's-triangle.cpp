#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[225][225] = {};
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for(int i = 2; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i && j-1 >= 0){
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}