#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int sum = 0;
    int c = 0;

    scanf("%d %d", &a, &b);

    for(a; a <= b; a++){
        if(a % 5 == 0 || a % 7 == 0){
            sum += a;
            c++;
        }
    }

    printf("%d %0.1f", sum, (float)sum/c);


    return 0;
}