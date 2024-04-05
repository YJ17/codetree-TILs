#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int p = 1;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        if(i != n){
            for(int o = 1; o <= p; o++){
                printf("  ");
            }
            p++;
        }
        for(int j = i * 2 - 1; j >= 1; j--){
            printf("* ");
        }
        printf("\n");
    }

    p-=2;

    for(int k = 2; k <= n; k++){
        if(k != n){
               for(int o = 1; o <= p; o++){
                printf("  ");
            }
            p--;
        }
        for(int t = k * 2 - 1; t >= 1; t--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}