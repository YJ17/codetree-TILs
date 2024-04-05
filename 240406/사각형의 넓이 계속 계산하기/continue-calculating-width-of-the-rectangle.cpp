#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int x;
    int y;
    char c;

    while(1){
        scanf("%d %d %c", &x, &y, &c);
        printf("%d\n", x*y);

        if(c == 'C'){
            break;
        }

    }


    return 0;
}