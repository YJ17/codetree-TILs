#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int t;
    int sum = 0;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &t);
        sum += t;
        c++;
    }

    printf("%d %0.1f", sum, (float)sum/c);

    return 0;
}