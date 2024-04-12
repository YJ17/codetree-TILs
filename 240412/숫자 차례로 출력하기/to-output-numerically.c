#include <stdio.h>

int PrintIncreseN(int n){
    if(n == 0){
        return 0;
    }

    PrintIncreseN(n - 1);
    printf("%d ", n);
}

int PrintDecreseN(int n){
    if(n == 0){
        return 0;
    }

    printf("%d ", n);
    PrintDecreseN(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d ", &n);

    PrintIncreseN(n);
    printf("\n");
    PrintDecreseN(n);

    return 0;
}