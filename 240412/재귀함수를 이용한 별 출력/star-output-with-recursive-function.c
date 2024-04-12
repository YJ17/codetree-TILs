#include <stdio.h>

int PrintStarTriangle(int n){
    if(n == 0){
        return 0;
    }

    PrintStarTriangle(n - 1);
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    PrintStarTriangle(n);

    return 0;
}