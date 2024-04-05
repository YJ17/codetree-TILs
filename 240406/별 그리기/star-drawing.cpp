#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int b = n - 1;

    for(int i = 0; i < n; i++){
        if(i != n){
            for(int o = b; o >= 1; o--){
                printf(" ");
            }
            b--;
        }
        for(int j = 1; j <= 2 * i + 1; j++){
            printf("*");
        }
        printf("\n");
    }

    b+=2;

    for(int j = n - 2; j >= 0; j--){
        for(int p = 1; p <= b; p++){
            printf(" ");
        }
        b++;
        for(int k = 1; k <= 2 * j + 1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}