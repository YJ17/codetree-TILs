#include <iostream>

using namespace std;

class Pc {
    public :
        string Id;
        int lv;
    
    Pc(string Id = "", int lv = 0){
        this->Id = Id;
        this->lv = lv;
    }

};

int main() {
    // 여기에 코드를 작성해주세요.

    string id;
    int level;

    Pc pc1 = Pc("codetree", 10);

    cin >> id >> level;

    Pc pc2 = Pc(id, level);

    cout << "user " << pc1.Id << " lv " << pc1.lv << endl;
    cout << "user " << pc2.Id << " lv " << pc2.lv << endl;

    return 0;
}