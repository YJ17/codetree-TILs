#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int p;

    for(int i = n; i >= 1; i--){
        p = i;
        for(int t = 1; t <= 2; t++){
            for(int j = p; j >= 1; j--){
                printf("*");
            }
            if(p * 2 != n * 2){
                int m = n * 2 - p * 2;
                for(int v = 1; v <= m; v++){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}