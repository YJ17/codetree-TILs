#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    for(int i = 0; i <= 5; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            c++;
        }
    }

    printf("%d", c);

    return 0;
}