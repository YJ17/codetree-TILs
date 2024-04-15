#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int month_date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, m2, d1, d2;
    int date2 = 0, date1 = 0;

    cin >> m1 >> d1 >> m2 >> d2;

    for(int i = 0; i < m1; i++){
        date1 += month_date[i];
    }
    date1 += d1;

    for(int i = 0; i < m2; i++){
        date2 += month_date[i];
    }
    date2 += d2;

    if(date2 - date1 == 0){
        cout << 1;
    }
    else {
        cout << date2 - date1;
    }

    return 0;
}