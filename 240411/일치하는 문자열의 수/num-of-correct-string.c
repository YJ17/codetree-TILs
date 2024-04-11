#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    char a[101];
    char q[101];
    int c = 0;

    scanf("%d %s", &n, a);

    for(int i = 0; i < n; i++){
        scanf("%s", q);
        if(strcmp(a, q) == 0){
            c++;
        }
    }

    printf("%d", c);

    return 0;
}