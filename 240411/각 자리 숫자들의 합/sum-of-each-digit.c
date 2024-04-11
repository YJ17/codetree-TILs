#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char num[10];
    int sum = 0;

    scanf("%d", &n);
    sprintf(num, "%d", n);

    for(int i = 0; i < strlen(num); i++){
        sum += num[i] - '0';
    }

    printf("%d", sum);

    return 0;
}