#include <stdio.h>
#include <stdbool.h>

bool IsBubun(int n1, int n2, char a[], char b[]){
    int c = 0;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i + j] == b[i]){
                c++;
            }
        }
        if(c == n2){
        return true;
        }
        c = 0;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n1, n2;
    char a[101];
    char b[101];

    scanf("%d %d", &n1, &n2);
    scanf("%s %s", a, b);

    if(IsBubun(n1, n2, a, b)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}