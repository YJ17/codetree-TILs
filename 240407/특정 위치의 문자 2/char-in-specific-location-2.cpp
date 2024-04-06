#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[11];

    for(int i = 0; i < 10; i++){
        scanf("%c ", &arr[i]);
        if(i == 1 || i == 4 || i == 7){
            printf("%c ", arr[i]);
        }
    }

    return 0;
}