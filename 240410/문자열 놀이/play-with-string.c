#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char s[101];
    char temp;
    int q;
    int t;
    int a;
    int b;
    char a1;
    char b1;

    scanf("%s ", s);
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        scanf("%d ", &t);
        if(t == 1){
            scanf("%d %d", &a, &b);
            temp = s[b - 1];
            s[b - 1] = s[a - 1];
            s[a - 1] = temp;
            printf("%s\n", s);
        }
        else {
            scanf("%c %c", &a1, &b1);
            for(int j = 0; j < strlen(s); j++){
                if(s[j] == a1){
                    s[j] = b1;
                }
            }
            printf("%s\n", s);
        }
    }

    return 0;
}