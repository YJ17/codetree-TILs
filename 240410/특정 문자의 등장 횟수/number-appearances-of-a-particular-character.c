#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[20];
    int c_ee = 0;
    int c_eb = 0;

    scanf("%s", arr);

    for(int i = 0 ; i < strlen(arr) - 1; i++){
        if(arr[i] == 'e' && arr[i+1] == 'e'){
            c_ee++;
        }
        else if(arr[i] == 'e' && arr[i+1] == 'b'){
            c_eb++;
        }
    }

    printf("%d %d", c_ee, c_eb);

    return 0;
}