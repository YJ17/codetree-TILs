#include <stdio.h>
#include <stdbool.h>

bool IsRightDate(bool st, int m, int d) {
    if (m > 12 || d > 31) {
        return false;
    }
    else if (st && m == 2 && d <= 29) {
        return true;
    }
    else if(m == 2 && d > 28){
        return false;
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
        return false;
    }
    return true;
}

bool IsYun(int y) {
    if (y % 100 == 0 && y % 400 != 0) {
        return false;
    }
    else if (y % 4 != 0) {
        return false;
    }
    return true;
}

void WhatWeather(int m) {
    if (m >= 9 && m <= 11) {
        printf("Fall");
    }
    else if (m >= 6) {
        printf("Summer");
    }
    else if (m >= 3) {
        printf("Spring");
    }
    else {
        printf("Winter");
    }
}

void IfIsExistDate(int y, int m, int d) {
    if (IsRightDate(IsYun(y), m, d)) {
        WhatWeather(m);
    }
    else {
        printf("-1");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int y, m, d;

    scanf("%d %d %d", &y, &m, &d);

    IfIsExistDate(y, m, d);

    return 0;
}