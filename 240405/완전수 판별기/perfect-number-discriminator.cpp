#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(i == 1 || n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("P");
    }
    else {
        printf("N");
    }

    return 0;
}