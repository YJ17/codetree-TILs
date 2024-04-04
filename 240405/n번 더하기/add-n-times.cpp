#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int n;

    scanf("%d %d", &a, &n);

    int i = 1;

    while(i <= n){
        printf("%d\n", a+=n);
        i++;
    }


    return 0;
}