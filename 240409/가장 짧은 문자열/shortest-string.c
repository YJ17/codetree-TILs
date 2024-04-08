#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[20];
    char b[20];
    char c[20];
    int min;
    int max;

    scanf("%s", a);
    min = max = strlen(a);
    scanf("%s", b);
    if(strlen(b)> max){
        max = strlen(b);
    }
    else if(strlen(b)<min){
        min = strlen(b);
    }
    scanf("%s", c);
    if(strlen(c)> max){
        max = strlen(c);
    }
    else if(strlen(c)<min){
        min = strlen(c);
    }

    printf("%d", max - min);

    return 0;
}