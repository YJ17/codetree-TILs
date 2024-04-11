#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char c;

    scanf("%c", &c);

    if((int)c == 97){
        printf("%c", 122);
    }
    else {
        printf("%c", (int)c - 1);
    }

    return 0;
}