#include <stdio.h>

void DoMath(int *a, int *b){
    if(*a > *b){
        *a += 25;
        *b *= 2;;
    }
    else {
        *b += 25;
        *a *= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;

    scanf("%d %d", &a, &b);

    DoMath(&a, &b);

    printf("%d %d", a, b);

    return 0;
}