#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    for(int i = 1; i <= 9; i++){
        for(int j = b; j >= a; j-=2){
            printf("%d * %d = %d", j, i, j*i);
            if(j > a){
                printf(" / ");
            }
        }
        printf("\n");
    }

    return 0;
}