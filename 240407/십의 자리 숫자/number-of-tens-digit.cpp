#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[101] = {};
    int i = 0;
    int c = 0;

    while(1){
        scanf("%d ", &arr[i]);
        if(arr[i] == 0){
            break;
        }
        i++;
    }

    for(int j = 1; j < 10; j++){
        for(int k = 0; k < i; k++){
            if(arr[k] / 10 == j){
                c++;
            }
        }
        printf("%d - %d\n", j, c);
        c = 0;
    }

    return 0;
}