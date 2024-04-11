#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Check369(int i){
    char check[10];
    sprintf(check, "%d", i);
    for(int j = 0; j < strlen(check); j++){
        if(check[j] == '3' || check[j] == '6' || check[j] == '9'){
            return true;
        }
    }
    return false;
}

int Game369(int a, int b){
    int count = 0;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0 || Check369(i)){
            count++;
        }
    }
    return count;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", Game369(a, b));

    return 0;
}