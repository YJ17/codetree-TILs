#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[10][50];

    for(int i = 0; i < 10; i++){
        scanf("%s", arr[i]);
        if(i % 2 == 0){
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}