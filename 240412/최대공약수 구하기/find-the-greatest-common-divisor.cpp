#include <iostream>

void MaxDivider(int n, int m){
    int max = 0;
    for(int i = 1; i <= 100; i++){
        if(n % i == 0 && m % i == 0){
            if(max < i){
                max = i;
            }
        }
    }
    printf("%d", max);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;

    scanf("%d %d", &n, &m);

    MaxDivider(n, m);

    return 0;
}