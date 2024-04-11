#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[10];
    char b[10];
    char a1[10];
    char b1[10];
    int ab_i = 0;
    int sum = 0;

    scanf("%s %s", a, b);

    for(int i = 0; i < strlen(a); i++){
        if(a[i] >= '0' && a[i] <= '9'){
        a1[ab_i] = a[i];
            ab_i ++;
        }
        else {
            break;
        }
    }

    sum += atoi(a1);
    ab_i = 0;

    for(int i = 0; i < strlen(b); i++){
        if(b[i] >= '0' && b[i] <= '9'){
            b1[ab_i] = b[i];
            ab_i ++;
        }
        else {
            break;
        }
    }
    sum += atoi(b1);

    printf("%d", sum);


    return 0;
}