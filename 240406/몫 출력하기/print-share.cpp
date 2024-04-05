#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    while(1){
        if(c == 3){
            break;
        }
        scanf("%d", &n);
        if(n % 2 == 0){
            printf("%d\n", n/2);
            c++;
        }
    }

    return 0;
}