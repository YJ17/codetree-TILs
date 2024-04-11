#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[11];
    char temp;

    scanf("%s", arr);
    printf("%s\n", arr);

    for(int i = 0; i < strlen(arr); i++){
        temp = arr[strlen(arr) - 1];
        for(int j = strlen(arr) - 1; j >= 1; j--){
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
        printf("%s\n", arr);
    }

    return 0;
}