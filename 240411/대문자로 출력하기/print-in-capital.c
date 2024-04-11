#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];

    scanf("%s", arr);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            printf("%c", arr[i]);
        }
        else if(arr[i] >= 'a' && arr[i] <= 'z'){
            printf("%c", arr[i] - 'a' + 'A');
        }
    }


    return 0;
}