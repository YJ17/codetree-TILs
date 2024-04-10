#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[21];
    char c1;
    char c2;

    scanf("%s", arr);
    c1 = arr[0];
    c2 = arr[1];

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == c1){
            arr[i] = c2;
        }
        else if(arr[i] == c2){
            arr[i] = c1;
        }
    }

    printf("%s", arr);

    return 0;
}