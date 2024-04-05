#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    int c = n + 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i >= j){
                printf("%d ", c - i);
                c++;
            }
        }
        c = n + 1;
        printf("\n");
    }

    return 0;
}