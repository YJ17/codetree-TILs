#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];

    scanf("%s", arr);

    for(int i = strlen(arr); i >= 0; i--){
        if(i % 2 != 0){
            printf("%c", arr[i]);
        }
    }

    return 0;
}