#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char n[101];

    scanf("%s", n);

    while(strcmp(n, "END") != 0){
        for(int i = strlen(n) - 1; i >= 0; i--){
            printf("%c", n[i]);
        }
        printf("\n");
        scanf("%s", n);
    }
    
    return 0;
}