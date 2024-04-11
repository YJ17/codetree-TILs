#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[2000];
    char rev[2000];
    char temp;
    int qn;
    int q;

    scanf("%s ", arr);
    scanf("%d", &qn);

    for(int i = 0; i < qn; i++){
        scanf("%d", &q);
        if(q == 1){
            temp = arr[0];
            for(int i = 0; i < strlen(arr); i++){
                arr[i] = arr[i + 1];
            }
            arr[strlen(arr)] = temp;
            printf("%s\n", arr);
        }
        else if(q == 2){
            temp = arr[strlen(arr) - 1];
            for(int i = strlen(arr) - 1; i >= 1; i--){
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
            printf("%s\n", arr);
        }
        else {
            for(int i = strlen(arr) - 1; i >= 0; i--){
                rev[(strlen(arr) - 1) - i] = arr[i];
                
            }
            strcpy(arr, rev);
            printf("%s\n", arr);
        }
    }

    return 0;
}