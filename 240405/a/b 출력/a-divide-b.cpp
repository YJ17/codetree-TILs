#include <iostream>
#include <math.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("%d.", a/b);

    int i = 1;
    int r = ((a%b) * 10);

    while(i <= 20){
        
        printf("%d", r/b);
        r = ((r%b)*10)/b;
        i++;
    }


    return 0;
}