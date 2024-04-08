#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    bool k = false;
    int count = 0;
    int mem[5];

    scanf("%c", &c);

    for(int i = 0; i < 5; i++){
        for(int j = 2; j <= 3; j++){
            if(arr[i][j] == c){
                if(k != true){
                    count++;
                    printf("%s\n", arr[i]);
                }
                k = true;
            }
        }
        k = false;
    }

    printf("%d", count);


    return 0;
}