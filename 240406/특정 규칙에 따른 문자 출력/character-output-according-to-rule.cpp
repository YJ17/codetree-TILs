#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i != n){
            for(int j = 1; j <= n - i; j++){
                printf("  ");
            }
        }
        for(int k = 1; k <= i; k++){
            printf("@ ");
        }
        printf("\n");
    }

    for(int t = n-1; t >= 1; t--){
        for(int o = 1; o <= t; o++){
            printf("@ ");
        }
        printf("\n");
    }

    return 0;
}