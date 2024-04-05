#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;
    int c = 0;

    while(1){
        scanf("%d", &n);
        if(n >= 20 && n <= 29){
            sum += n;
            c++;
        }
        else{
            printf("%0.2f", (float)sum/c);
            break;
        }
    }

    return 0;
}