#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[200][201];
    int i = 0;
    int count = 0;

    scanf("%s", a[i]);

    while(strcmp(a[i], "0") != 0){
        i++;
        count++;
        scanf("%s", a[i]);
    }

    printf("%d\n", count);

    for(int j = 0; j < i; j++){
        if(j % 2 == 0){
            printf("%s\n", a[j]);
        }
    }


    return 0;
}