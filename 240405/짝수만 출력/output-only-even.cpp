#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    while(a <= b){
        printf("%d ", a);
        a += 2;
    }

    return 0;
}