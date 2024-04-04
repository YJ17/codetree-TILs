#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;

    int t = b;
    int t2 = c;
    b = a;
    c = t;
    a = t2;

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}