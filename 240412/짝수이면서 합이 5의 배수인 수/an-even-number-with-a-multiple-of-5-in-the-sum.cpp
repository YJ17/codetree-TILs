#include <iostream>

bool IsTrue(int n){
    return n % 2 == 0 && ((n % 10) + (n / 10)%10) % 5 == 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    if(IsTrue(n)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}