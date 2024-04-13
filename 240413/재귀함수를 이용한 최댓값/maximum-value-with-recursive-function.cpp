#include <iostream>

int n;
int arr[101];
int max = -1;

int ArrMax(int *arr){
    if(*arr == 0){
        return 0;
    }

    ArrMax(arr + 1);

    if(max < *arr){
        max = *arr;
    }

    return max;
}


int main() {
    // 여기에 코드를 작성해주세요.

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    printf("%d", ArrMax(arr));

    return 0;
}