#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int m1, m2, d1, d2, cal = 0;
    int month_date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string minusDay[7] = {"Mon", "Sun", "Sat", "Fri", "Thu", "Wed", "Tue"};

    cin >> m1 >> d1 >> m2 >> d2;

    for(int i = 0; i < m2 -1; i++){
        cal += month_date[i];
    }
    cal += d2;

    for(int i = 0; i < m1 - 1; i++){
        cal -= month_date[i];
    }
    cal -= d1;

    if(cal < 0){
        cout << minusDay[(-cal) % 7];
    }
    else {
        cout << day[cal % 7];

    }


    return 0;
}