#include <stdio.h>

char arr[101];

void PrintSum(int a1, int a2){
    int sum = 0;
    for(int i = a1; i <= a2; i++){
        sum += arr[i - 1];
    }
    printf("%d\n", sum);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, a1, a2;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < m; i++){
        scanf("%d %d", &a1, &a2);
        PrintSum(a1, a2);
    }

    return 0;
}