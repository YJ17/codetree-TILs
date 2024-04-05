#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0 && i != 1){
            c = i * n - (n-1);
        }
        else if(i % 2 == 0 && i != 1) {
            c +=n-1;
        }
        for(int j = 1; j <= n; j++){
            if(i % 2 != 0){
                printf("%d ", c);
                c++;
            }
            else{
                printf("%d ", c);
                c--;
            }
        }
        printf("\n");
    }

    return 0;
}