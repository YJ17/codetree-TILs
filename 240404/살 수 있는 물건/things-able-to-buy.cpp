#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    if(n >= 3000){
        printf("book");
    }
    else if(n < 1000){
        printf("no");
    }
    else {
        printf("mask");
    }



    return 0;
}