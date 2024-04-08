#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int m;
    int arr[101][101];
    int num = 1;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = num;
            num++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}