#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    int min;
    int c = 0;
    int k;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &k);
        if(i == 0){
            min = k;
            c++;
        }
        else if(k < min){
            min = k;
            c = 1;
        }
        else if(k == min){
            c++;
        }
    }

    printf("%d %d", min, c);

    return 0;
}