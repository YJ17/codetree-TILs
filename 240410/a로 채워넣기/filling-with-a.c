#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];

    scanf("%s", arr);

    arr[1] = 'a';
    arr[strlen(arr) - 2] = 'a';

    printf("%s", arr);

    return 0;
}