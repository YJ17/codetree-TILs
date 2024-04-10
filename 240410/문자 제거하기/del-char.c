#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[21];
    int n;

    scanf("%s", arr);

    while(strlen(arr) != 1){
        scanf("%d", &n);
        if(n < strlen(arr)){    
            for(int i = 0; i < strlen(arr); i++){
                if(i >= n){
                    arr[i] = arr[i + 1];
                }
            }
        }
        else {
            arr[strlen(arr) - 1] = '\0';
        }
        printf("%s\n", arr);
    }

    return 0;
}