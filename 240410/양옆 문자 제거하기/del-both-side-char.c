#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];
    char ch[101] = {'\0'};
    int c = 0;

    scanf("%s", arr);

    for(int i = 0; i < strlen(arr) ; i++ ){
        if(i != 1 && i != strlen(arr) - 2){
            ch[c] = arr[i];
            c++;
        }
    }

    printf("%s", ch);

    return 0;
}