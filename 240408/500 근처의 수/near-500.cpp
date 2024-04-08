#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int max = -1;
    int min = 1001;
    int n;

    for(int i = 0; i < 10; i++){
        scanf("%d ", &n);
        if(n < 500){
            if(n > max){
                max = n;
            }
        }
        else if(n > 500){
            if(min > n){
                min = n;
            }
        }
    }

    printf("%d %d", max, min);

    return 0;
}