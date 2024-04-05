#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n\n");
    }

    for(int k = n-1; k >= 1; k--){
        for(int t = k; t >= 1; t--){
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}