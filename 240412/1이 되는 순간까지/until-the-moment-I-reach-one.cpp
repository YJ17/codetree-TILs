#include <iostream>

int c;

int UntilOne(int n){
    if(n == 1){
        return 0;
    }

    if(n % 2 == 0){
        UntilOne(n / 2);
        c++;
    }
    else {
        UntilOne(n / 3);
        c++;
    }
    return c;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", UntilOne(n));

    return 0;
}