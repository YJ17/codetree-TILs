#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x, answer = 0;

    cin >> x;

    int speed = 1;
    int sec = 0;
    for(int i = 1; i <= x; i+=speed){
        sec++;
        int up_dis = 0;
        for(int j = 1; j <= speed + 1; j++){
            up_dis += j;
        }
        int this_dis = 0;
        for(int j = 1; j <= speed; j++){
            this_dis += j;
        }

        if(x - i >= up_dis){
            speed++;
        }
        else if(x - i < up_dis && x - i >= this_dis){
            continue;
        }
        else if(x - i == speed || (x - i < up_dis && x - i < this_dis)){
            if(speed == 1){
                continue;
            }
            speed--;
        }
    }

    cout << sec;

    return 0;
}