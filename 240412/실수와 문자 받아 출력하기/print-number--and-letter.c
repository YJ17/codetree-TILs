#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    double a, b;
    char c;

    scanf("%c", &c);
    scanf("%lf %lf", &a, &b);

    printf("%c\n%.2lf\n%.2lf", c, a, b);

    return 0;
}