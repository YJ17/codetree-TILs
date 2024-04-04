#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int j = 1;


    scanf("%d", &n);

    for(j; j <= n; j++){
        if(j % 3 == 0){
            printf("0 ");
        }
        else if(j % 10 == 3 && j % 10 == 6 && j % 10 == 9){
            printf("0 ");
        }
        else if((j / 10) % 10 == 3 && (j / 10) % 10 == 6 && (j / 10) % 10 == 9)
        {
            printf("0 ");
        }
        else {
            printf("%d ", j);
        }
    }

    return 0;
}