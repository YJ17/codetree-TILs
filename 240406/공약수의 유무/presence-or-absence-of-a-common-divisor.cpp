#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    bool s = false;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(1920 % i == 0 || 2880 % i == 0){
            s = true;
        }
    }

    if(s == true){
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}