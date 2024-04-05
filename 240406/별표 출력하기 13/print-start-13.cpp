#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int s = n;

    for(int i = 1; i <= n * 2; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= s; j++){
                printf("* ");
            }
            s--;
        }
        else {
            for(int k = 1; k <= i/2; k++){
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}