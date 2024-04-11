#include <iostream>

bool IsOnjun(int n){
    if(n % 2 == 0){
        return false;
    }
    if(n % 10 == 5){
        return false;
    }
    if(n % 3 == 0 && n % 9 != 0){
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, n = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(IsOnjun(i)){
            n++;
        }
    }

    printf("%d", n);

    return 0;
}