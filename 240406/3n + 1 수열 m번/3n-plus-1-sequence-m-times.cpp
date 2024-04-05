#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int m;
    int n;
    int c = 0;

    scanf("%d", &m);

    for(int i = 1; i <= m; i++){
        scanf("%d", &n);
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;

            }
            else {
                n = n * 3 + 1;
            }
            c++;
        }
        printf("%d\n", c);
        c = 0;
    }

    return 0;
}