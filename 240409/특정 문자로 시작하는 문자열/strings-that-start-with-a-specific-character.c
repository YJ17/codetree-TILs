#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char arr[20][21];
    char c;
    int len_s = 0;
    int count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s ", arr[i]);
    }

    scanf("%c", &c);

    for(int i = 0; i < n; i++){
        if(c == arr[i][0]){
            count++;
            len_s += strlen(arr[i]);
        }
    }

    printf("%d %0.2f", count, (float)len_s/count);

    return 0;
}