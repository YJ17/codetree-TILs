#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101];

    fgets(a, 101, stdin);
    // scanf("%[^\n]", a);

    for(int i = 2; i < 10; i++){
        printf("%c", a[i]);
    }


    return 0;
}