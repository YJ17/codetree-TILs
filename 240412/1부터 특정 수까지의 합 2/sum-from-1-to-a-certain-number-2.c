#include <stdio.h>

int SumOneToN(int n){
    if(n == 1){
        return 1;
    }

    return SumOneToN(n - 1) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", SumOneToN(n));

    return 0;
}