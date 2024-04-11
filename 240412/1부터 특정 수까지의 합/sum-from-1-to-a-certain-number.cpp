#include <iostream>

int SumDiv10(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", SumDiv10(n));

    return 0;
}