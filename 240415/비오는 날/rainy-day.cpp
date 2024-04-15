#include <iostream>

using namespace std;

class Weather{
    public :
        string date;
        string day;
        string wed;

        Weather(string date, string day, string wed){
            this->date = date;
            this->day = day;
            this->wed = wed;
        }

        Weather () {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n, r_i = -1;
    Weather weather_list[100];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> weather_list[i].date >> weather_list[i].day >> weather_list[i].wed;
        if(weather_list[i].wed == "Rain" && r_i == -1){
            r_i = i;
        }
        else if(weather_list[i].wed == "Rain" && r_i != -1){
            if(weather_list[i].date < weather_list[r_i].date){
                r_i = i;
            }
        }
    }

    cout << weather_list[r_i].date << " " << weather_list[r_i].day << " " << weather_list[r_i].wed;

    return 0;
}