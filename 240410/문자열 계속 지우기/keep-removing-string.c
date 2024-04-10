#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a[101];
    char b[101];
    int c = 0;
    bool st = false;
    bool sq = false;

    scanf("%s", a);
    scanf("%s", b);

    while (st == false) {
        sq = false;
        for (int i = 0; i <= strlen(a); i++) {
            if (sq == false) {
                for (int j = 0; j < strlen(b); j++) {
                    if (a[i + j] == b[j]) {
                        c++;
                    }
                }
                if (c == strlen(b)) {
                    sq = true;
                }
                c = 0;
            }
            else {
                a[i-1] = a[(i - 1) + strlen(b)];
            }
        }
        if (sq != true) {
            st = true;
        }
    }

    printf("%s", a);

    return 0;
}