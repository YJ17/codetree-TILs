#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    for(int i = 2; i <= 8; i+=2){
        for(int j = b; j >= a; j--){
            printf("%d * %d = %d", j, i, j*i);
            if(j > a){
                printf(" / ");
            }
        }
        printf("\n");
    }

    return 0;
}