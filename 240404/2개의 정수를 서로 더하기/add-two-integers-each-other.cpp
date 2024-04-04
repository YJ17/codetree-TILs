#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;

    scanf("%d %d", &a, &b);

    a += b;
    b +=a;

    printf("%d %d", a, b);

    return 0;
}