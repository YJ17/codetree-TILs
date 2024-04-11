#include <iostream>

void MinMulty(int n, int m){
    if(n > m){
        for(int i = n; i < n * m; i++){
            if(i % n == 0 && i % m == 0){
                printf("%d", i);
                break;
            }
        }
    }
    else {
         for(int i = m; i < n * m; i++){
            if(i % n == 0 && i % m == 0){
                printf("%d", i);
                break;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;

    scanf("%d %d", &n, &m);

    MinMulty(n, m);

    return 0;
}