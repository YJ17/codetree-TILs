#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    float a;
    float b;

    scanf("%f\n%f", &a, &b);
    
    if(a >= 1.0 && b >= 1.0){
        printf("High");
    }
    else if(a >= 0.5 && b >= 0.5){
        printf("Middle");
    }
    else {
        printf("Low");
    }

    return 0;
}