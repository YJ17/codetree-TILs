#include <stdio.h>

int arr[3];

int AddEachNum(int n){
    if(n < 10){
        return n;
    }

    return AddEachNum((n / 10)) + (n % 10); 
}

int MulArr(int i){
    if(i == 1){
        return arr[i - 1];
    }

    return MulArr(i - 1) * arr[i - 1];
}

int DoIt(int i){
    int sum = MulArr(i);

    return AddEachNum(sum);
}

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i = 0; i < 3; i++){
        scanf("%d ", &arr[i]);
    }

    printf("%d", DoIt(3));

    return 0;
}