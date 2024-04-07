#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[10] = {};
    int c = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 1; j <= 9; j++){
        for(int k = 0; k < n; k++){
            if(arr[k] == j){
                c++;
            }
        }
        printf("%d\n", c);
        c = 0;
    }

    return 0;
}