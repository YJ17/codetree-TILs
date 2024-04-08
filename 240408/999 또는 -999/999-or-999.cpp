#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int max = -1000;
    int min = 1000;
    int c;

    while(1){
        scanf("%d ", &c);
        if(c == 999 || c == -999){
            break;
        }
        else if(c > max){
            max = c;
        }        
        else if(c < min){
            min = c;
        }
    }

    printf("%d %d", max, min);


    return 0;
}