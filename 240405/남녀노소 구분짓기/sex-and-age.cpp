#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int g;
    int n;

    scanf("%d\n%d", &g, &n);

    if(n >= 19){
        if(g){
            printf("WOMAN");
        }
        else{
            printf("MAN");
        }
    }
    else if(g){
            printf("GIRL");
    }
    else{
            printf("BOY");
    }
    

    return 0;
}