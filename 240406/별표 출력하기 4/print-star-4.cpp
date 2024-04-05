#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("* ");
        }
        printf("\n");
    }

    for(int k = 2; k <= n; k++){
        for(int t = 1; t <= k; t++){
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}