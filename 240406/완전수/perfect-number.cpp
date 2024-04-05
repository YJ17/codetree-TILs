#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int s;
    int e;
    int c = 0;
    int sum = 0;

    scanf("%d %d", &s, &e);

    for(int i = s; i <= e; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            c++;
        }
        sum = 0;
    }

    printf("%d", c);

    return 0;
}