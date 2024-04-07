#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int a1;
    int a2;
    int arr[101];

    scanf("%d %d", &a1, &a2);
    arr[0] = a1;
    arr[1] = a2;
    printf("%d %d ", arr[0], arr[1]);

    for(int i = 2; i < 10; i++){
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
        printf("%d ", arr[i]);
    }

    return 0;
}