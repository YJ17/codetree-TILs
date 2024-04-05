#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 4 == 0){
            c++;
            if(i % 100 == 0 && i % 400 != 0){
                c--;
            }
        }
    }

    printf("%d", c);

    return 0;
}