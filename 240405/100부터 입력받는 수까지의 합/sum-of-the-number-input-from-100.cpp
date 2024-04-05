#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;

    scanf("%d", &n);

    for(n; n <= 100; n++){
        sum += n;
    }

    printf("%d", sum);
    
    return 0;
}