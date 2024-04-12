#include <iostream>

int EachSquareSum(int n){
    if(n < 10){
        return n * n;
    }

    return EachSquareSum(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d" ,EachSquareSum(n));

    return 0;
}