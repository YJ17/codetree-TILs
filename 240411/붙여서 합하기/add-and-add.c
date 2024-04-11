#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[1001];
    char b[1001];
    char ab[2001];
    char ba[2001];
    int sum = 0;

    scanf("%s %s", a, b);

    strcpy(ab, a);
    strcat(ab, b);

    strcpy(ba, b);
    strcat(ba, a);

    sum += atoi(ab) + atoi(ba);

    printf("%d", sum);

    return 0;
}