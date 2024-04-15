#include <iostream>
#include <algorithm>

using namespace std;

class Dot {
    public :
        int x, y, number;

        Dot(int x, int y, int number){
            this->x = x;
            this->y = y;
            this->number = number;
        }

        Dot() {}
};

bool cmp(const Dot &a, const Dot &b){
    if(a.x < 0){
        if(a.y < 0){
            if(b.x < 0){
                if(b.y < 0){
                    return (-a.x) + (-a.y) < (-b.x) + (-b.y);
                }
                return (-a.x) + (-a.y) < (-b.x) + b.y;
            }
            return (-a.x) + (-a.y) < b.x + b.y;
        }
        return (-a.x) + a.y < b.x + b.y;
    }
    return a.x + a.y < b.x + b.y;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Dot dots[1001];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> dots[i].x >> dots[i].y;
        dots[i].number = i + 1;
    }

    sort(dots, dots + n, cmp);

    for(int i = 0; i < n; i++){
        cout << dots[i].number << endl;
    }

    return 0;
}