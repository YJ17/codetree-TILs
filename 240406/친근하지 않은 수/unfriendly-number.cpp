#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
            continue;
        }
        c++;
    }

    printf("%d", c);

    return 0;
}