#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101];
    int st = -1;
    
    scanf("%s", a);

    for(int i = 0; i <= strlen(a); i++){
        if(st == -1){
            if(a[i] == 'e'){
                st = 0;
            }
        }
        if(st == 0) {
            a[i] = a[i + 1];
        }
    }

    printf("%s", a);

    return 0;
}