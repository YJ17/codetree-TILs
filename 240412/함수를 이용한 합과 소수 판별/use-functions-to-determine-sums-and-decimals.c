#include <stdio.h>
#include <stdbool.h>

bool IsSosu(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool SumEven(int n){
    int sum = 0;
    while(1){
        sum += n % 10;
        n = n / 10;
        if(n < 10){
            sum += n;
            break;
        }
    }
    if(sum % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, n = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(IsSosu(i) && SumEven(i)){
            n++;
        }
    }

    printf("%d", n);

    return 0;
}