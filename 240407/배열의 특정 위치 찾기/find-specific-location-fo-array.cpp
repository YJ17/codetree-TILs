#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[10];
    int sum2 = 0;
    int sum3 = 0;
    float avg;
    int c3 = 0;

    for(int i = 0; i <= 9; i++){
        scanf("%d", &arr[i]);
        if(i % 2 == 1){
            sum2 += arr[i];
        }
        
        if(i == 2 || i == 5 || i == 8){
            sum3 += arr[i];
            c3++;
        }
    }

    if(((sum3/c3) * 100) % 10 >= 5){
        avg = sum3/c3 + 0.1;
    }
    else{
        avg = sum3/c3;
    }

    printf("%d %0.1f", sum2, avg);

    return 0;
}