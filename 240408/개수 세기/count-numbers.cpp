#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int m;
    int t;
    int c = 0;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        scanf("%d ", &t);
        if(t == m){
            c++;
        }
    }

    printf("%d", c);

    return 0;
}