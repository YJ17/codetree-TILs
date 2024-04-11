#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0;
    char a[101];
    char b[101];
    int pos = 0;
    char temp;

    scanf("%s", a);
    scanf("%s", b);
    
    for(int k = 0; k < strlen(a); k++){
        temp = a[strlen(a) - 1];
        for(int i = strlen(a) - 1; i >= 1; i--){
            a[i] = a[i - 1];
        }
        a[0] = temp;
        n++;
        if(strcmp(a, b) == 0){
            pos = 1;
            break;
        }
    }

    if(pos == 0){
        printf("-1");
    }
    else {
        printf("%d", n);
    }

    return 0;
}