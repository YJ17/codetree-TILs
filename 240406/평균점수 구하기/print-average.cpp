#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    float s;
    float sum = 0;

    for(int i = 1; i <= 8; i++){
        scanf("%f", &s);
        sum += s;
    }

    printf("%0.1f", sum/8);

    return 0;
}