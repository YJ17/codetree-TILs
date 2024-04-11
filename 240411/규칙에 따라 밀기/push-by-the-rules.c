#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[150];
    char o[150];
    char temp;

    scanf("%s", a);
    scanf("%s", o);

    for(int i = 0; i < strlen(o); i++){
        if(o[i] == 'L'){
            temp = a[0];
            for(int j = 0; j < strlen(a); j++){
                a[j] = a[j + 1];
            }
            a[strlen(a)] = temp;
        }
        else {
            temp = a[strlen(a) - 1];
            for(int j = strlen(a) - 1; j > 0; j--){
                a[j] = a[j - 1];
            }
            a[0] = temp;
        }
    }

    printf("%s", a);

    return 0;
}