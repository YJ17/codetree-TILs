#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int count = 0;
    char sum[1001];

    scanf("%d %d", &a, &b);

    sprintf(sum, "%d", a+b);

    for(int i = 0; i < strlen(sum); i++){
        if(sum[i] == '1'){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}