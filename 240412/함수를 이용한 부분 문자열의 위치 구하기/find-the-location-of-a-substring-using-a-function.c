#include <stdio.h>
#include <string.h>

char arr[1001];
char ch[1001];

int IsExist(){
    int count = 0;
    for(int i = 0; i <= strlen(arr) - strlen(ch); i++){
        for(int j = 0; j < strlen(ch); j++){
            if(arr[i + j] == ch[j]){
                count++;
            }
        }
        if(count == strlen(ch)){
            return i;
        }
        count = 0;
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.

    scanf("%s %s", arr, ch);

    printf("%d", IsExist());

    return 0;
}