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


     if(g1 == 'N'){
            if(g2 == 'Y' && g3 == 'Y'){
                if(p2 >= 37 && p3 >= 37){
                    printf("E");
                }
                else{
                    printf("N");
                }
            }
            else{
                printf("N");
            }
        }
        else if(g2 == 'N'){
            if(g1 == 'Y' && g3 == 'Y'){
                if(p1 >= 37 && p3 >= 37){
                    printf("E");
                }
                else{
                    printf("N");
                }
            }
            else{
                printf("N");
            }
        }
        else if(g3 == 'N'){
            if(g1 == 'Y' && g2 == 'Y'){
                if(p1 >= 37 && p2 >= 37){
                    printf("E");
                }
                else{
                    printf("N");
                }
            }
            else{
                printf("N");
            }
        }
        else if(p1 >= 37 && p2 >= 37){
            printf("E");
        }
         else if(p1 >= 37 && p3 >= 37){
            printf("E");
        }
        else if(p2 >= 37 && p3 >= 37){
            printf("E");
        }
        else{
            printf("N");
        }




    return 0;
}