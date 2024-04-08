#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int max;
    int c;

    for(int i = 0; i < 10; i++){
        scanf("%d ", &c);
        if(i == 0){
            max = c;
        }
        else if(c > max){
            max = c;
        }
    }

    printf("%d", max);

    return 0;
}