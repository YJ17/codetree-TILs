#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;
    int c;

    scanf("%d", &n);

    for(int i = 1; i <= 100; i++){
        sum += i;
        if(sum >= n){
            c = i;
            break;
        }
    }

    printf("%d", c);


    return 0;
}