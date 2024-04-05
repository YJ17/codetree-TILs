#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    while(1){
        if(n == 1){
            printf("%d", c);
            break;
        }
        if(n % 2 == 0){
            n /= 2;
            c++;
        }
        else {
            n = n * 3 + 1;
            c++;
        }
    }

    return 0;
}