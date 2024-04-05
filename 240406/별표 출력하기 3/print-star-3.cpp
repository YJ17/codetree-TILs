#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int b = 1;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--){

        if(i != n){
            for(int t = 1; t <= b; t++){
                printf("  ");
            }
            b++;
        }
        for(int j = 2 * i - 1; j >= 1; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}