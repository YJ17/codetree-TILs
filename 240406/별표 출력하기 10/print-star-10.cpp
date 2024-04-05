#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int s = n;

    for(int i = 1; i <= n*2; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= (i + 1)/2; j++){
                printf("* ");
            }
        }
        else {
            for(int k = 1; k <= s; k++){
                printf("* ");
            }
            s--;
        }
        printf("\n");
    }

    return 0;
}