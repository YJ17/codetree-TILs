#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int c;
    int d;
    int count = 0;
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(60 <= (a+b+c+d)/4){
            printf("pass\n");
            count++;
        }
        else{
            printf("fail\n");
        }
    }

    printf("%d", count);


    return 0;
}