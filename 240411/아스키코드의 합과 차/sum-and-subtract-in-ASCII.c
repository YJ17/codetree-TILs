#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char c1;
    char c2;

    scanf("%c %c", &c1, &c2);

    if((int)c1 > (int)c2){
        printf("%d %d", (int)c1 + (int)c2, (int)c1 - (int)c2);
    }
    else {
        printf("%d %d", (int)c1 + (int)c2, (int)c2 - (int)c1);
    }

    return 0;
}