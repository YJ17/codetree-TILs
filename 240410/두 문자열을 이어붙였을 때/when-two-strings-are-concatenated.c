#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101] = {'\0'};
    char b[101] = {'\0'};
    char ab[201] = {'\0'};
    char ba[201] = {'\0'};
    int count = 0;

    scanf("%s", a);
    scanf("%s", b);

    strcat(ab, a);
    strcat(ab, b);

    strcat(ba, b);
    strcat(ba, a);

    for(int i = 0; i < strlen(ab); i++){
        if(ab[i] != ba[i]){
            count = 1;
        }
    }

    if(count == 1){
        printf("false");
    }
    else{
        printf("true");
    }
 

    return 0;
}