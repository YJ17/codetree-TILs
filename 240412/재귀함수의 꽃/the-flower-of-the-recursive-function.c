#include <stdio.h>

int PrintUpDown(int n){
    if(n == 0){
        return 0 ;
    }

    printf("%d ", n);
    PrintUpDown(n - 1);
    printf("%d ", n);    
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    PrintUpDown(n);

    return 0;
}