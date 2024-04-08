#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int c2 = 0;
    int arr[101];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] == 2){
            c2 += 1;
            if(c2 == 3){
                printf("%d", i+1);
                break;
            }
        }
    }

    return 0;
}