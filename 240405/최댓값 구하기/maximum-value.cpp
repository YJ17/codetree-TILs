#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("%d", a);
        }
        else {
            printf("%d", c);
        }
    }
    else if(b > c){
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }

    return 0;
}