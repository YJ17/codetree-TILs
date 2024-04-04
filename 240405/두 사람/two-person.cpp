#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    char ac;
    char bc;

    scanf("%d %c\n%d %c", &a, &ac, &b, &bc);

    printf("%d", a >= 19 && ac == 'M' || b >= 19 && bc == 'M');

    return 0;
}