#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int sum = 0;
    int c;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        c++;
        if(arr[i] >= 250){
            for(int j = 0; j < i; j++){
                sum += arr[j];
            }
            break;
        }
    }

    printf("%d %0.1f", sum, (float)sum/(c-1));

    return 0;
}