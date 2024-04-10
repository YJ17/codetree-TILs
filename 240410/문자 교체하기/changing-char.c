#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[21];
    char b[21];

    scanf("%s", a);
    scanf("%s", b);

    b[0] = a[0];
    b[1] = a[1];

    printf("%s", b);

    return 0;
}