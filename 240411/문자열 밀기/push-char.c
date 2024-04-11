#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char temp;
    char arr[21];

    scanf("%s", arr);
    temp = arr[0];

    for(int i = 0; i < strlen(arr); i++){
        arr[i] = arr[i + 1];
    }
    arr[strlen(arr)] = temp;

    printf("%s", arr);

    return 0;
}