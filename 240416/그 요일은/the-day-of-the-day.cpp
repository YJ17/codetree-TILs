#include <iostream>

using namespace std;

int WhatDate(int a, int b){
    int month_date[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cal = 0;
    for(int i = 0; i < a - 1; i++){
        cal += month_date[i];
    }

    return cal += b;
}

int WhatDayNum(string wd, int cal){
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int c = 0, res = 0;
    for(int i = 0; i < 6; i++){
        if(wd == day[i]){
            c = i;
        }
    }

    res = cal / 7;

    if(c <= cal % 7){
        return res + 1;
    }
    else {
        return res;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int m1, m2, d1, d2, cal;
    string w;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> w;

    cal = WhatDate(m2, d2) -  WhatDate(m1, d1);

    cout << WhatDayNum(w, cal);

    return 0;
}