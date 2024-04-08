#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[1001];
    int max = -1;
    int t;
    int o;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            t = i;
        }
    }

    printf("%d ", t+1);

    while(t != 0){
        max = -1;
        for(int i = 0; i < t; i++){
            if(arr[i] > max){
                max = arr[i];
                o = i;
            }
        }
        printf("%d ", o+1);
        t = o;
    }

    return 0;
}