#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 != 0){
                c+=1;
                printf("%d ", c);
            }
            else {
                c+=2;
                printf("%d ", c);

            }
        }
        printf("\n");
    }

    return 0;
}