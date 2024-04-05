#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    bool s = false;

    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            s = true;
        }
    }

    if(s == true){
        printf("C");
    }
    else{
        printf("N");
    }

    return 0;
}