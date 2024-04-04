#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int b;

    scanf("%d %d", &a, &b);

    if(a >= b){
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    if(a > b){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


    if(b >= a){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


    if(b > a){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


    if(a == b){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


    if(a != b){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


    return 0;
}