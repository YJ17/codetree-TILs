#include <iostream>

void PrintSquareNum(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(num == 10){
                num = 1;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    PrintSquareNum(n);

    return 0;
}