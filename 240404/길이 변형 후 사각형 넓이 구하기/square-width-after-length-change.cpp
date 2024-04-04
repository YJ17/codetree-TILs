#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int x;
    int y;

    scanf("%d %d", &x, &y);
    
    x += 8;
    y *= 3;

    printf("%d\n%d\n%d", x, y, x*y);

    return 0;
}