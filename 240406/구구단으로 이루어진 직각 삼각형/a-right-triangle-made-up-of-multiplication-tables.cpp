#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-c; j++){
            printf("%d * %d = %d", i, j, i*j);
            if(j < n-c){
                printf(" / ");
            }

        }
        printf("\n");
        c++;
    }

    return 0;
}