#include <stdio.h>
#include <stdbool.h>

bool IsYun(int n){
    if(n % 100 == 0 && n % 400 != 0){
        return false;
    }
    else if (n % 4 != 0){
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int y;

    scanf("%d", &y);

    if(IsYun(y)){
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}