#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;

    scanf("%d %d", &n, &m);

    Swap(&n, &m);

    printf("%d %d", n, m);


    return 0;
}