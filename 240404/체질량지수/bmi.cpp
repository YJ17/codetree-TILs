#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int h;
    int w;

    scanf("%d %d", &h, &w);

    printf("%d", (h*h)/(10000*w));

    if(25 <= (h*h)/(10000*w)){
        printf("\nObesity");
    }

    return 0;
}