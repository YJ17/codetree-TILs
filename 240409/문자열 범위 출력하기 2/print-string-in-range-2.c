#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];
    int n;
    int count = 0;

    scanf("%s ", &arr);
    scanf("%d", &n);

    if(strlen(arr) < n){
        for(int i = strlen(arr) -1; i >= 0; i--){
            printf("%c", arr[i]);
        }
    }
    else {
        for(int i = strlen(arr)-1; i >= 0; i--){
            if(count == n){
                break;
            }
            printf("%c", arr[i]);
            count ++;
        }
    }

    return 0;
}