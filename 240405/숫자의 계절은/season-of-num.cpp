#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;

    scanf("%d", &a);

    if(3 <= a <= 5){
        printf("Spring");
    }
    else if(6 <= a <= 8){
        printf("Summer");
    }
    else if(9 <= a <= 11){
        printf("Fall");
    }
    else {
        printf("Winter");
    }

    return 0;
}