#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[1001];
    char b[3];
    int count = 0;
    int check = 0;

    scanf("%s", a);
    scanf("%s", b);

    for(int i = 0; i < strlen(a) - 1; i++){
        for(int j = 0; j < 2; j++){
            if(a[i+j] == b[j]){
                count++;
            }
        }
        if(count == 2){
            check++;
        }
        count = 0;
    }

    printf("%d", check);

    return 0;
}