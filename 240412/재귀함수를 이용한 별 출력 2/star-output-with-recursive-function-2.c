#include <stdio.h>

void PrintStar(int n){
    if(n == 0){
        return;
    }

    for(int i = 0; i < n; i++){
        printf("* ");
    }
    printf("\n");
    PrintStar(n - 1);
    for(int i = 0; i < n; i++){
        printf("* ");
    }
    printf("\n");

}


int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    PrintStar(n);

    return 0;
}