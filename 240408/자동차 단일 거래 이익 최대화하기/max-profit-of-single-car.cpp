#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int cha = 0;
    int arr[1001];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[j] && arr[j] - arr[i] > cha){
                cha = arr[j] - arr[i];
            }
        }
    }

    if(cha != 0){
        printf("%d", cha);
    }
    else {
        printf("0");
    }

    return 0;
}