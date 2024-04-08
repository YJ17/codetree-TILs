#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101];
    char b[101];
    char c;

    fgets(a, 101, stdin);
    fgets(b, 101, stdin);

    for(int i = 0; i < strlen(a) - 1; i++){
        if(a[i] != ' '){
            printf("%c", a[i]);
        }
    }

    for(int i = 0; i < strlen(b); i++){
        if(b[i] != ' '){
            printf("%c", b[i]);
        }
    }

    return 0;
}