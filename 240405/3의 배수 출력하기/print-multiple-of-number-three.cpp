#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int i = 1;

    scanf("%d", &n);

    while(i <= n){
        if(i % 3 == 0){
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}