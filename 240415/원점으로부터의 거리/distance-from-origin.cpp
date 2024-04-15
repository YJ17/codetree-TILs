#include <iostream>
#include <algorithm>

using namespace std;

class Dot {
    public :
        int x, y, number;
        int disx, disy;

        Dot(int x, int y, int number, int disx, int disy){
            this->x = x;
            this->y = y;
            this->number = number;
            this->disx = disx;
            this->disy = disy;
        }

        Dot() {}
};

bool cmp(const Dot &a, const Dot &b){
    if(a.disx + a.disy == b.disx + b.disy){
        if(a.disx == b.disx){
            if(a.disy == b.disy){
                return a.number < b.number;
            }
            return a.disy < b.disy;
        }
        return a.disx < b.disx;
    }
    return a.disx + a.disy < b.disx + b.disy;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Dot dots[1001];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> dots[i].x >> dots[i].y;
        dots[i].number = i + 1;
        if(dots[i].x < 0){
            dots[i].disx = -dots[i].x;
        }
        else {
            dots[i].disx = dots[i].x;
        }

        if(dots[i].y < 0){
            dots[i].disy = -dots[i].y;
        }
        else{
            dots[i].disy = dots[i].y;
        }
    }

    sort(dots, dots + n, cmp);

    for(int i = 0; i < n; i++){
        cout << dots[i].number << endl;
    }

    return 0;
}