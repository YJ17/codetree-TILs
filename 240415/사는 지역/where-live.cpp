#include <iostream>

using namespace std;

class People {
    public :
        string name;
        string place;
        string city;

        People(string name, string place, string city){
            this->name = name;
            this->place = place;
            this->city = city;
        }

        People() {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n, ch = 0;
    People people_list[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> people_list[i].name >> people_list[i].place >> people_list[i].city;
        if(i != 0){
            if(people_list[ch].name < people_list[i].name){
                ch = i;
            }
        }
    }

    cout << "name " << people_list[ch].name << endl;
    cout << "addr " << people_list[ch].place << endl;
    cout << "city " << people_list[ch].city;

    return 0;
}