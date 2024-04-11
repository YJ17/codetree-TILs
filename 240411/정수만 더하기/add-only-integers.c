#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[21];
    int sum = 0;

    scanf("%s", arr);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] >= '0' && arr[i] <= '9'){
            sum += (int)arr[i] - 48;
        }
    }

    printf("%d", sum);

    return 0;
}