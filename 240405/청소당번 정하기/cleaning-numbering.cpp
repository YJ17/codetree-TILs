#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c = 0;
    int l = 0;
    int t = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        if(i % 2 == 0 && i % 3 == 0 && i % 12 == 0){
            t++;
        }
        else if(i % 2 == 0 && i % 3 == 0){
            l++;
        }
        else if(i % 2 == 0 && i % 12 == 0){
            t++;
        }
        else if(i % 3 == 0){
            l++;
        }
        else if(i % 2 == 0){
            c++;
        }
    }

    printf("%d %d %d", c, l, t);


    return 0;
}