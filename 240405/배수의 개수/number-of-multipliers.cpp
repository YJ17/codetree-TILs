#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c3 = 0;
    int c5 = 0;

    for(int i = 0; i <= 9; i++){
        scanf("%d", &n);
        if(n % 3 == 0){
            c3++;
        }
        if(n % 5 == 0){
            c5++;
        }
    }

    printf("%d %d", c3, c5);

    return 0;
}