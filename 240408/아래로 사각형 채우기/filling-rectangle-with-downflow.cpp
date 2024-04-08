#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int num = 1;
    int numj = num;
    int arr[11][11];

    scanf("%d ", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0){
                arr[i][j] = num;
                num++;
            }
            else {
                arr[i][j] = numj + n;
                numj += n;
            }
        }
        numj = num;
    }    

    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}