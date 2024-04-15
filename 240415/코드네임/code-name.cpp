#include <iostream>

using namespace std;

class Spy {
    public :
        char Codename;
        int Score;

        Spy(char Codename = 0, int Score = 0){
            this->Codename = Codename;
            this->Score = Score;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.

    Spy spylist[5];
    int min = 101;
    int mini = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> spylist[i].Codename >> spylist[i].Score;;
        if(min > spylist[i].Score){
            min = spylist[i].Score;
            mini = i;
        }
    }

    cout << spylist[mini].Codename << " " << spylist[mini].Score;

    return 0;
}