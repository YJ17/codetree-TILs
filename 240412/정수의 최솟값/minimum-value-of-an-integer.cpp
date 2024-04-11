#include <iostream>

int Min3(int a, int b, int c){
    if(a > b && b > c){
        return c;
    }
    else if(a > c && c > b){
        return b;
    }
    else {
        return a;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", Min3(a, b, c));

    return 0;
}