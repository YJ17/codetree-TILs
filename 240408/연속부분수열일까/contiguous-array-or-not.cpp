#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n1;
    int n2;
    int c = 0;
    bool k = false;

    int a[101];
    int b[101];

    scanf("%d %d", &n1, &n2);

    for(int i = 0; i < n1; i++){
        scanf("%d ", &a[i]);
    }

    for(int i = 0; i < n2; i++){
        scanf("%d ", &b[i]);
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[j + i] == b[j]){
                c++;
            }
        }
        if(c == n2){
            printf("Yes");
            k = true;
            break;
        }
        c = 0;
    }
    
    if(k == false){
        printf("No");
    }

    return 0;
}