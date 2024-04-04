#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int am, ae;
    int bm, be;

    scanf("%d %d\n%d %d", &am, &ae, &bm, &be);

    if(am > bm){
        printf("A");
    }
    else if (am == bm && ae > be){
        printf("A");
    }
    else {
        printf("B");
    }


    return 0;
}