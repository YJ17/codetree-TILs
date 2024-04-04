#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    char c;

    scanf("%c", &c);

    if(c == 'S'){
        printf("Superior");
    }
    else if(c == 'A'){
        printf("Excellent");
    }
    else if(c == 'B'){
        printf("Good");
    }
    else if(c == 'C'){
        printf("Usually");
    }
    else if(c == 'D'){
        printf("Effort");
    }
    else {
        printf("Failure");
    }


    return 0;
}