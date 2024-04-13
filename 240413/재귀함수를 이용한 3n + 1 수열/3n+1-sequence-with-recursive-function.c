#include <stdio.h>

int count = 0;

int HowManyRepeat(int n){
    if(n == 1){
        return 0;
    }

    if(n % 2 == 0){
        count++;
        HowManyRepeat(n / 2);
    }
    else {
        count++;   
        HowManyRepeat(n * 3 + 1);
    }

    return count;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", HowManyRepeat(n));

    return 0;
}