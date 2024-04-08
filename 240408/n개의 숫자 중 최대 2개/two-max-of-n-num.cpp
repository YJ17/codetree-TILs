#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101];
    int temp = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }    

    printf("%d %d", arr[0], arr[1]);


    return 0;
}