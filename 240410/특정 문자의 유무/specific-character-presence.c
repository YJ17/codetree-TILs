#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int et = 0;
    int at = 0;
    char arr[20];

    scanf("%s", arr);

    for(int i = 0; i < strlen(arr) - 1; i++){
        if(arr[i] == 'e' && arr[i + 1] == 'e'){
            et = 1;
        }
        else if(arr[i] == 'a' && arr[i + 1] == 'b'){
            at = 1;
        }
    }

    if(et == 1){
        printf("Yes ");
    }
    else {
        printf("No ");
    }

    if(at == 1){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}