#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;

    scanf("%c", &c);

    for(int i = 0; i < 6; i++){
        if(arr[i] == c){
            printf("%d ", i);
        }
    }

    return 0;
}