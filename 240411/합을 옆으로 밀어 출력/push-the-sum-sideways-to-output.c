#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int q;
    int sum = 0;
    char arr[10];
    char temp;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &q);
        sum += q;
    }

    sprintf(arr, "%d", sum);

    temp = arr[0];
    for(int i = 0; i < strlen(arr); i++){
        arr[i] = arr[i + 1];
    }
    arr[strlen(arr)] = temp;

    printf("%s", arr);

    return 0;
}