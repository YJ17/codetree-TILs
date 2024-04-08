#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    char n;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            scanf("%c ", &n);
            printf("%c ", char((int)n - 32));
        }
        printf("\n");
    }

    return 0;
}