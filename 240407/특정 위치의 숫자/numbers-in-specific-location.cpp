#include <iostream>

int main() {

    int num = 0;
    int n = 0;

    for(int i = 1; i <= 10; i++){
        scanf("%d", &n);
        if(i == 3 || i == 5 || i == 10){
            num = num + n;
        }
    }

    printf("%d", num);

    // 여기에 코드를 작성해주세요.
    return 0;
}