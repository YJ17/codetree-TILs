#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[20];
    char c;
    int t = 0;

    scanf("%s ", arr);
    scanf("%c", &c);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == c){
            printf("%d", i);
            t = 1;
            break;
        }
    }

    if(t == 0){
        printf("No");
    }

    return 0;
}