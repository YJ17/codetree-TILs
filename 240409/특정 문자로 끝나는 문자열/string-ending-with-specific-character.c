#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[10][21];
    char c;
    int count = 0;

    for(int i = 0; i < 10; i++){
        scanf("%s ", arr[i]);
    }

    scanf("%c", &c);

    for(int i = 0; i < 10; i++){
        if(c == arr[i][strlen(arr[i]) - 1]){
            printf("%s\n", arr[i]);
            count ++;
        }
    }

    if(count == 0){
        printf("None");
    }


    return 0;
}