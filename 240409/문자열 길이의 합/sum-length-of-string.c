#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char arr[10][101];
    int sum = 0;
    int count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum += strlen(arr[i]);
        if(arr[i][0] == 'a'){
            count++;
        }
    }

    printf("%d %d", sum, count);


    return 0;
}