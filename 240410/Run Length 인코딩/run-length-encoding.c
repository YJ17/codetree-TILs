#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char arr[1001];
    int count[1001];
    char alph[1001];
    int c = 1;
    int a_i = 0;
    int c_i = 0;

    scanf("%s", &arr);

    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == arr[i+1]){
            c++;
        }
        else{
            alph[a_i] = arr[i];
            count[c_i] = c;
            c = 1;
            a_i++;
            c_i++;
        }
    }
    
    int j = 0;
    for(int i = 0; i < c_i; i++){
        if(count[i] > 9){
            j += 2;
        }
        else {
            j += 1;
        }
    }
    printf("%d\n", strlen(alph) + j);
    
    for(int i = 0; i < c_i; i++){
        printf("%c", alph[i]);
        printf("%d", count[i]);
    }

    return 0;
}