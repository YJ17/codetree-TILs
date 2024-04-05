#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 9;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d", c);
            c--;
            if(c == 0){
                c = 9;
            }
        }
        printf("\n");
    }

    return 0;
}