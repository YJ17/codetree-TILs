#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    bool s = false;

    for(int i = 1; i <= 5; i++){
        scanf("%d", &n);
        if(n % 3 != 0){
            s = true;
        }
    }

    if(s == true){
        printf("0");
    }
    else{
        printf("1");
    }

    return 0;
}