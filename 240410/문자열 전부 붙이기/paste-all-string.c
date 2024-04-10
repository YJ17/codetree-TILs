#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char answer[1001];
    char temp[101];

    scanf("%d", &n);
    scanf("%s", answer);

    for(int i = 1; i < n; i++){
        scanf("%s", temp);
        strcat(answer, temp);
    }

    printf("%s", answer);

    return 0;
}