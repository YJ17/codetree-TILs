#include <stdio.h>

void ChangeNum(int *a, int *b){
    if(*a > *b){
        *a *= 2;
        *b += 10;
    }
    else {
        *a += 10;
        *b *= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    int a, b;

    scanf("%d %d", &a, &b);

    ChangeNum(&a, &b);

    printf("%d %d", a, b);

    return 0;
}