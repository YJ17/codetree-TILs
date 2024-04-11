#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 2, b = 5;
    int t = a;
    a = b;
    b = t;

    printf("%d\n%d", a, b);

    return 0;
}