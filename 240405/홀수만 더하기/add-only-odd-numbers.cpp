#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int t;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &t);
        if(t % 2 == 1 && t % 3 == 0){
            sum += t;
        }
    }

    printf("%d", sum);

    return 0;
}