#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101][101];
    int num = 1;

    scanf("%d", &n);

    for(int j = n-1; j >= 0; j--){
        if(j %2 == 0){
            for(int i = 0; i < n; i++){
                arr[i][j] = num;
                num++;
            }
        }
        else {
            for(int i = n-1; i >= 0; i--){
                arr[i][j] = num;
                num++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}