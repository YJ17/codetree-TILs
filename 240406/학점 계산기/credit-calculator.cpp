#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    float arr[100];
    int n;
    float sum = 0;
    float avg = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    if((sum/n) * 100 / 10 >= 5){
        printf("%0.1f\n", sum/n + 0.01);
    }
    else {
        printf("%0.1f\n", sum/n);
    }

    if(sum/n >= 4.0){
        printf("Perfect");
    }
    else if(sum/n >= 3.0){
        printf("Good");
    }
    else {
        printf("Poor");
    }

    return 0;
}