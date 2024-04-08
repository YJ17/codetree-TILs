#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int sum = 0;
    int n;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &n);
            sum += n;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}