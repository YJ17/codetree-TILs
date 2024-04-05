#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int sum = 0;
    int c = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        if(n >= 0 && n <= 200){
            sum += n;
            c++;
        }
    }

    printf("%d %0.1f", sum, (float)sum/c);

    return 0;
}