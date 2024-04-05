#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for(a; a <= b; a++){
        sum += a;
    }

    printf("%d", sum);

    return 0;
}