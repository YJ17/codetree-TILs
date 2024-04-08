#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101];
    int brr[101];
    int t = 0;
    int max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] > max){
                max = arr[j];
                t = j;
            }
        }
        brr[i] = max;
        arr[t] = 0;
        max = 0;
        t = 0;
    }

    printf("%d %d", brr[0], brr[1]);

    return 0;
}