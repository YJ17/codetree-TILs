#include <iostream>

using namespace std;

class Boom {
    public :
        string Code;
        char Color;
        int Second;

        Boom(string Code, char Color, int Second){
            this->Code = Code;
            this->Color = Color;
            this->Second = Second;
        }

        Boom() {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    Boom bombs;

    cin >> bombs.Code >> bombs.Color >> bombs.Second;

    cout << "code : " << bombs.Code << endl;
    cout << "color : " << bombs.Color << endl;
    cout << "second : " << bombs.Second;

    return 0;
}