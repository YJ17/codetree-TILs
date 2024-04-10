#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char m[1001];
    char n[1001];
    int c = 0;
    int ri = 0;
    int t = -1;

    scanf("%s", n);
    scanf("%s", m);

    for(int i = 0; i < strlen(n) - 1; i++){
        for(int j = 0; j < strlen(m) - 1; j++){
            if(n[i + j] == m[j]){
                c++;
            }
        }
        if(c == strlen(m)){
            t = 0;
            ri = i - (strlen(m) - 1);
            break;
        }
    }

    if(t != -1){
        printf("%d", ri);
    }
    else {
        printf("%d", t);
    }

    return 0;
}