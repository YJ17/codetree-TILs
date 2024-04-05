#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int cnt = 0;

    scanf("%d", &n);

    while(1){
        if(n % 2 == 0){
            n = n * 3 + 1;

        }
        else {
            n = n * 2 + 2;
        }
        cnt += 1;
        if(n >= 1000){
            printf("%d", cnt);
            break;
        }
    }


    return 0;
}