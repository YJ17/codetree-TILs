#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];
    char c;
    int count = 0;

    fgets(arr, 101, stdin);
    scanf("%c", &c);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == c){
            count ++;
        }
    }

    printf("%d", count);

    return 0;
}