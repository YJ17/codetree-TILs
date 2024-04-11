#include <iostream>

int Add(int a, int b){
    return a+b;
}

int Sub(int a, int b){
    return a-b;
}

int Div(int a, int b){
    return a/b;
}

int Res(int a, int b){
    return a%b;
}

int Mul(int a, int b){
    return a*b;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, c;
    char o;

    scanf("%d %c %d", &a, &o, &c);

    if(o == '+'){
        printf("%d %c %d = %d", a, o, c, Add(a, c));
    }
    else if(o == '-'){
        printf("%d %c %d = %d", a, o, c, Sub(a, c));
    }
    else if(o == '/'){
        printf("%d %c %d = %d", a, o, c, Div(a, c));
    }
    else if(o == '%'){
        printf("%d %c %d = %d", a, o, c, Res(a, c));
    }
    else if(o == '*'){
        printf("%d %c %d = %d", a, o, c, Mul(a, c));
    }
    else {
        printf("False");
    }

    return 0;
}