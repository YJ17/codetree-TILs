#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool IsPalin(char *a){
    char comp[101];
    for(int i = strlen(a) - 1; i >= 0; i--){
        comp[(strlen(a) - 1) - i] = a[i]; 
    }
    comp[strlen(a)] = '\0';
    if(strcmp(comp, a) == 0){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[101];

    scanf("%s", arr);

    if(IsPalin(arr)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}