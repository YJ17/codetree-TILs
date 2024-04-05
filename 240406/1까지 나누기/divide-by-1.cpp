#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int d = 1;
    int c = 0;

    scanf("%d", &n);

    while(n / d > 1){
        n /= d;
        d ++;
        c ++;
    }

    printf("%d", c + 1);

    return 0;
}