#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[21];

    scanf("%s", arr);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            printf("%c", arr[i] - 'a' + 'A');
        }
        else {
            printf("%c", arr[i] - 'A' + 'a');

        }
    }

    return 0;
}