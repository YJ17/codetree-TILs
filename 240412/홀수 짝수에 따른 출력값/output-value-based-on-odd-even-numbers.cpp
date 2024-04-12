#include <iostream>

int SpecialSum(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }


    return SpecialSum(n - 2) + n;
}


int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    printf("%d", SpecialSum(n));

    return 0;
}