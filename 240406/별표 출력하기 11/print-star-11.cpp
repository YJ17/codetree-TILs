#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n * 2 + 1; i++){
        for(int j = 1; j <= n * 2 + 1; j++){
            if(i % 2 != 0){
                printf("* ");
            }
            else {
                if(j % 2 != 0){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }


    return 0;
}