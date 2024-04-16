#include <iostream>
#include <algorithm>

using namespace std;

class Covid {
    public :
        int sc, x, y;

        Covid(int sc, int x, int y){
            this->sc = sc;
            this->x = x;
            this->y = y;
        }

        Covid() {}
};

class Human {
    public :
        int state, sh_num;

        Human(int state = 0, int sh_num = 0){
            this->state = state;
            this->sh_num = sh_num;
        }

};

bool cmp(const Covid &a, const Covid &b){
    return a.sc < b.sc;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, p, t;
    Covid covid_list[250];
    Human dev_list[100];

    cin >> n >> k >> p >> t;

    for(int i = 1; i <= n; i++){
        if(i == p){
            dev_list[i].state = 1;
            dev_list[i].sh_num = k;
        }
        else {
            dev_list[i].state = 0;
            dev_list[i].sh_num = 0;
        }
    }

    for(int i = 0; i < t; i++){
        cin >> covid_list[i].sc >> covid_list[i].x >> covid_list[i].y;
    }

    sort(covid_list, covid_list + t, cmp);

    for(int i = 0; i < t; i++){
        if(dev_list[covid_list[i].x].state == 1 && dev_list[covid_list[i].y].state == 1){
            if(dev_list[covid_list[i].x].sh_num != 0){
                dev_list[covid_list[i].x].sh_num -= 1;
            }
            if(dev_list[covid_list[i].y].sh_num != 0){
                dev_list[covid_list[i].x].sh_num -= 1;
            }
        }
        else if(dev_list[covid_list[i].x].state == 1){
            if(dev_list[covid_list[i].x].sh_num != 0){
                dev_list[covid_list[i].y].state = 1;
                dev_list[covid_list[i].y].sh_num = k;
                dev_list[covid_list[i].x].sh_num -= 1;
            }
        }
        else {
            if(dev_list[covid_list[i].y].sh_num != 0){
                dev_list[covid_list[i].x].state = 1;
                dev_list[covid_list[i].x].sh_num = k;
                dev_list[covid_list[i].y].sh_num -= 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << dev_list[i].state;
    }

    return 0;
}