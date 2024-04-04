#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int y;

    scanf("%d", &y);

    if(y % 4 == 1 || y % 100 == 0 && y % 400 == 1){
        printf("false");
    }
    else {
        printf("true");
    }

    return 0;
}