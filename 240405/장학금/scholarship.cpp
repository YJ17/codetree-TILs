#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int m;
    int l;

    scanf("%d %d", &m, &l);

    if(m >= 90){
        if(l >= 95){
            printf("100000");
        }
        else if(l >= 90){
            printf("50000");
        }
        else {
            printf("0");
        }
    }
    else {
        printf("0");
    }


    return 0;
}