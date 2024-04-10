#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];
    char c0;
    char c1;

    scanf("%s", arr);
    c0 = arr[0];
    c1 = arr[1];

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == c1){
            arr[i] = c0;
        }
    }

    printf("%s", arr);

    return 0;
}