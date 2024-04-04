#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if(a < b){
        if(a < c){
            if(b < c){
                printf("%d", b);
            }
            else {
                printf("%d", c);
            }
        }
        else {
            printf("%d", a);
        }
    }else if(a > c){
        if(b < c){
            printf("%d", c);
        }
        else {
            printf("%d", b);
        }
    } else {
        printf("%d", a);
    }



    return 0;
}