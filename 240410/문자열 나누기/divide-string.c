#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char arr[10];
    char add[10001];
    int count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s ", &arr);
        strcat(add, arr);
    }

    for(int i = 0; i < strlen(add); i++){
        if(i != 0 && i % 5 == 0){
            printf("\n");
        }
        printf("%c", add[i]);
    }


    return 0;
}