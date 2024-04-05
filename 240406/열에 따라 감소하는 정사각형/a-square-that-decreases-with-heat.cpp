#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}