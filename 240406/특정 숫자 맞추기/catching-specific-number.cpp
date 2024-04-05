#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    while(1){
        scanf("%d", &n);
        if(n < 25){
            printf("Higher\n");
        }
        else if(n > 25){
            printf("Lower\n");
        }
        else if(n == 25){
            printf("Good\n");
            break;
        }
    }

    return 0;
}