#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
            if(j == i && j != 1){
                for(int k = 1; k <= i-1; k++){
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}