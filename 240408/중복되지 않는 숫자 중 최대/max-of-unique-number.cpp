#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[1001];
    int max = -1;
    int bb[1001] = {};
    bool t = false;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                bb[i] = 1;
                bb[j] = 1;
            }
            else if(bb[j] != 1 && bb[i] != 1) {
                bb[i] = 2;
                bb[j] = 2;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(bb[i] == 2 && max < arr[i]){
            max = arr[i];
            t = true;
        }
    }

    if(n == 1){
        t = true;
        max = arr[0];
    }

    if(t == true){
        printf("%d", max);
    }
    else {
        printf("-1");
    }

    return 0;
}