#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int min = 101;
    int arr[11];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j] && arr[j] - arr[i] < min){
                min = arr[j] - arr[i];
            }
            else if(arr[i] > arr[j] && arr[i] - arr[j] < min){
                min = arr[i] - arr[j];
            }
        }
    }

    printf("%d", min);

    return 0;
}