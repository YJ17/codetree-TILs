#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int t;
    int c = 0;
    int arr[101];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &t);
        if(t % 2 == 0){
            arr[c] = t;
            c++;
        }
    }

    for(int j = 0; j < c; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}