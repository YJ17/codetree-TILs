#include <stdio.h>

int HowManyRepeat(int n){
    if(n == 1){
        return 0;
    }

    if(n % 2 == 0){
        return HowManyRepeat(n / 2) + 1;
    }
    else {  
        return HowManyRepeat(n * 3 + 1) + 1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", HowManyRepeat(n));

    return 0;
}