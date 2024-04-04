#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);
    
    if(n == 2){
        printf("28");
    }
    else if(n == 4 || n == 6 || n == 9 || n == 11){
        printf("30");
    }
    else {
        printf("31");
    }

    return 0;
}