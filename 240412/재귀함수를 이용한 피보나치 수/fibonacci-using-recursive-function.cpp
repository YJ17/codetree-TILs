#include <iostream>

int WhatNFibo(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }

    return WhatNFibo(n - 1) + WhatNFibo(n - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", WhatNFibo(n));

    return 0;
}