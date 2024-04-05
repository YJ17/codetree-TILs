#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int t = 1;

    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i++){
        t *= a;
    }

    printf("%d", t);

    return 0;
}