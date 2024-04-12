#include <stdio.h>

int PrintHelloWorld(int n){
    if(n == 0){
        return 0;
    }
    
    PrintHelloWorld(n - 1);
    printf("HelloWorld\n");
} 

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    PrintHelloWorld(n);

    return 0;
}