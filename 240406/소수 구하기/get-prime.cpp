#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                c++;
            }
        }
        if(c == 2){
            printf("%d ", i);
        }
        c = 0;
    }

    return 0;
}