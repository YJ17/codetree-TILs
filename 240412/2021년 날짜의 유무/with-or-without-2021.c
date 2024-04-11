#include <stdio.h>
#include <stdbool.h>

bool IsIn2021(int m, int d){
    
    if(m > 12){
        return false;
    }
    else if(m == 2 && d > 28){
        return false;
    }
    else if((m == 3 || m == 4 || m == 6 || m == 9 || m == 11) && d > 30){
        return false;
    }
    else if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31){
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int m, d;
    
    scanf("%d %d", &m, &d);

    if(IsIn2021(m, d)){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}