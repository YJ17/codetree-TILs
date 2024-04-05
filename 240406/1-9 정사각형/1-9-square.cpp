#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(c == 10){
                c = 1;
            }
            printf("%d", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}