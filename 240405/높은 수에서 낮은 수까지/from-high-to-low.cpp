#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    if(a > b){
        for(a; a >= b; a--){
            printf("%d ", a);
        }
    }
    else {
        for(b; b >= a; b--){
            printf("%d ", b);
        }
    }

    return 0;
}