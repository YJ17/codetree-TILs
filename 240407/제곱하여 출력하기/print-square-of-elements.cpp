#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c;
    
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d ", &c);
        printf("%d ", c*c);
    }

    return 0;
}