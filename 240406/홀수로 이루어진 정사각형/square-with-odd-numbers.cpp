#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int s = 10;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", (j * 2 - 1) + s);
        }
        printf("\n");
        s += 2;
    }

    return 0;
}