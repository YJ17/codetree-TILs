#include <stdio.h>

int WhatNum(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    return WhatNum(n / 3) + WhatNum(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", WhatNum(n));

    return 0;
}