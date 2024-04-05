#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 1;

    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        sum *= i;
        if(sum >= n){
            printf("%d", i);
            break;
        }
    }

    return 0;
}