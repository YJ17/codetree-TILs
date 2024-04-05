#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int b = n-1;

    for(int i = 1; i <= n; i++){
        if(i != n){
            for(int o = b; o >= 1; o--){
                printf(" ");
            }
            b--;
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    b+=1;

    for(int k = n-1; k >= 1; k--){
        for(int x = 1; x <= b; x++){
            printf(" ");
        }
        b++;
        for(int t = 1; t <= k; t++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}