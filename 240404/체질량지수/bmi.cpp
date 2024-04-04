#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int h;
    int w;

    scanf("%d %d", &h, &w);

    printf("%d", (10000*w)/(h*h));

    if(25 <= (10000*w)/(h*h)){
        printf("\nObesity");
    }

    return 0;
}