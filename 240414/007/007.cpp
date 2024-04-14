#include <iostream>

using namespace std;

class Spy {
    public :
        string s_code;
        char m_p;
        int time;

    Spy(string s_code, char m_p, int time){
        this->s_code = s_code;
        this->m_p = m_p;
        this->time = time;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.

    string s_c;
    char point;
    int t;

    cin >> s_c >> point >> t;

    Spy spy1 = Spy(s_c, point, t);

    cout << "secret code : " << spy1.s_code << endl;
    cout << "meeting point : " << spy1.m_p << endl;
    cout << "time : " << spy1.time;


    return 0;
}