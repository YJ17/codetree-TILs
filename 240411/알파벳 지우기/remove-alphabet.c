#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[11];
    char b[11];
    char a1[11];
    char b1[11];
    int ind = 0;

    scanf("%s", a);
    scanf("%s", b);

    for(int i = 0; i < strlen(a); i++){
        if(a[i] >= '0' && a[i] <= '9'){
            a1[ind] = a[i];
            ind++;
        }
    }
    ind = 0;

    for(int i = 0; i < strlen(b); i++){
        if(b[i] >= '0' && b[i] <= '9'){
            b1[ind] = b[i];
            ind++;
        }
    }

    printf("%d", atoi(a1) + atoi(b1));

    return 0;
}