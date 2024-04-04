#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int am;
    int ae;
    int bm;
    int be;

    scanf("%d %d\n%d %d", &am, &ae, &bm, &be);

    printf("%d", am > bm && ae > be);

    return 0;
}