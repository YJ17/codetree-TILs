#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    while(1){
        if(n / 2 == 1){
            c += 1;
            printf("%d", c);
            break;
        }
        c += 1;
        n /= 2;
    }

    return 0;
}