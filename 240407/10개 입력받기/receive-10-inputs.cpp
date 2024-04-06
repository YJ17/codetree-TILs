#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;
    int c = 0;

    for(int i = 0; i <= 9; i++){
        scanf("%d", &n);
        if(n != 0){
            sum += n;
            c++;
        }
        else{
            break;
        }
    }

    printf("%d %0.1f", sum, (float)sum/c);

    return 0;
}