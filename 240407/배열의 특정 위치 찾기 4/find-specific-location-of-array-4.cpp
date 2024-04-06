#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;
    int sum = 0;

    for(int i = 0; i <= 9; i++){
        scanf("%d", &n);
        if(n != 0 && n % 2 == 0){
            sum += n;
            c++;
        }
        else if (n == 0){
            break;
        }
    }

    printf("%d %d", c, sum);

    return 0;
}