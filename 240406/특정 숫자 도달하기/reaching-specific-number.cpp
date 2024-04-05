#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int sum = 0;
    int c = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        c++;
        if(arr[i] >= 250){
            sum -= arr[i];
            c--;
            break;
        }
    }

    printf("%d %0.1f", sum, (float)sum/c);

    return 0;
}