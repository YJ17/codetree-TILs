#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == 6 || j == 1 || j == 6){
                printf("* ");
            }
            else if(i > j){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}