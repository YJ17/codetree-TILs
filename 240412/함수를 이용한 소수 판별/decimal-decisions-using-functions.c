#include <stdio.h>
#include <stdbool.h>

bool IsSosu(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(i != 1 && IsSosu(i)){
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}