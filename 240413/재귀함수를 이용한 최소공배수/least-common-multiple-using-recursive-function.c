#include <stdio.h>

int n;
int arr[10];

int IsAllDiv(int num, int len){
    if(len == 0){
        return 0;
    }

    if(num % arr[len - 1] == 0){
        return IsAllDiv(num, len - 1) + 1;
    }
    else {
        return IsAllDiv(num, len - 1) + 0;
    }
}

int MaxDivNum(int i){
    int min;
    for(int j = i; j >= 1; j--){
        if(IsAllDiv(j,n) == n){
            min = j;
        }
    }
    return min;
}

int MulArr(int i){
    if(i == 0){
        return arr[i];
    }
    
    return MulArr(i - 1) * arr[i - 1];
}

int NsMiniMulNum(){

    return MaxDivNum(MulArr(n));
}

int main() {
    // 여기에 코드를 작성해주세요.

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    printf("%d", NsMiniMulNum());


    return 0;
}