#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int a;
    int b;
    int sum = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        for(int j = a; j <= b; j++){
            sum *= j;
        }
        printf("%d\n", sum);
        sum = 1;
    }

    return 0;
}