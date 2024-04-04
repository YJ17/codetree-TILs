#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int p1;
    int p2;
    int p3;
    char g1;
    char g2;
    char g3;

    scanf("%c %d\n%c %d\n%c %d", &g1, &p1, &g2, &p2, &g3, &p3);


    if(g1 == 'Y' && p1 >= 37){
        if(g2 == 'Y' && p2 >= 37 || g3 == 'Y' && p3 >= 37){
            printf("E");
        }
        else{
            printf("V");
        }
    }
    else if(g2 == 'Y' && p2 >= 37 && g3 == 'Y' && p3 >= 37){
            printf("E");
    }
    else{
        printf("V");
    }


    return 0;
}