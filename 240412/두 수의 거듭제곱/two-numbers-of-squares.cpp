#include <iostream>

int SquareAB(int a, int b){
    int mul = 1;
    for(int i = 0; i < b; i++){
        mul *= a;
    }
    return mul;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", SquareAB(a, b));

    return 0;
}