#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[11];
    int o_sum = 0;
    int e_sum = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
        if(i % 2 == 0){
            o_sum += arr[i];
        }
        else{
            e_sum += arr[i];
        }
    }

    if(o_sum > e_sum){
        printf("%d", o_sum - e_sum);
    }
    else{
        printf("%d", e_sum - o_sum);
    }

    return 0;
}