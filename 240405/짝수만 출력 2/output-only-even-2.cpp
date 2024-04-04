#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &b, &a);

    while(b >= a){
        printf("%d ", b);
        b -= 2;
    }

    return 0;
}