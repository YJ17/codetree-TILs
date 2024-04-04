#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &b, &a);

    for(b; b >= a; b-=2){
        printf("%d ", b);
    }


    return 0;
}