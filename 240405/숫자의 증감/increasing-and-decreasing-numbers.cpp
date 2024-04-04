#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char c;

    scanf("%c %d", &c, &n);

    if(c == 'A'){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }    
    else {
        for(int i = 0; i < n; i++){
            printf("%d ", n-i);
        }
    }

    return 0;
}