#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsOther2(char a[]){
    int count = 0;
    for(int i = 0; i < strlen(a) - 1; i++){
        if(a[i] != a[i + 1]){
            count++;
        }
    }
    if(count >= 1){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101];

    scanf("%s", a);

    if(IsOther2(a)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}