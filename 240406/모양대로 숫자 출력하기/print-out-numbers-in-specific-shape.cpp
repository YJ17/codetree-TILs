#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(i >= j){
                printf("%d ", j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}