#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[10][21];
    int sum = 0;

    for(int i = 0; i < 10; i++){
        scanf("%s", arr[i]);
    }

    for(int i = 0; i < 10; i++){
        sum += strlen(arr[i]);
    }

    printf("%d", sum);

    return 0;
}