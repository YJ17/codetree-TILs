#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = (int)'A';

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i <= j){
                printf("%c ", (char)c);
                c++;
                if(c > (int)'Z'){
                    c = (int)'A';
                }
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}