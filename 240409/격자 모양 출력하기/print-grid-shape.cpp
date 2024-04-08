#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int m;
    int arr[10][10] = {};
    int x;
    int y;

    scanf("%d %d", &n, &m);

    for(int d = 0; d < m; d++){
        scanf("%d %d", &x, &y);
        arr[x - 1][y - 1] = x * y;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}