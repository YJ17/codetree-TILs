#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    float a;

    scanf("%f", &a);

    if(a >= 1.0){
        printf("High");
    }
    else if(a >= 0.5){
        printf("Middle");
    }
    else{
        printf("Low");
    }


    return 0;
}