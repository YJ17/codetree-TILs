#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("%d ", a);

    while(a <= b){
        if(a % 2 == 1){
            if(a * 2 <= b){
                printf("%d ", a *=2);
            }
            else{
                return 0;
            }
        }
        else {
            if(a + 3 <= b){
                printf("%d ", a += 3);
            }
            else{
                return 0;
            }
        }

    }

    
    return 0;
}