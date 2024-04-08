#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    printf("%d", strlen(a) + strlen(b));

    return 0;
}