#include <iostream>
#include <string.h>

int m;
int arr[101];

void WowMath(){
    int sum = 0;
    while(m != 1){
        sum += arr[m - 1];
        if(m % 2 == 0){
            m /= 2;
        }
        else {
            m -= 1;
        }
    }
    sum += arr[0];

    printf("%d", sum);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    WowMath();

    return 0;
}