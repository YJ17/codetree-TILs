#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;
    int c;
    bool w = false;

    scanf("%d %d %d", &a, &b, &c);

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            w = true;
        }
    }

    if(w == true){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}