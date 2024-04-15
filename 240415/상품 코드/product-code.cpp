#include <iostream>

using namespace std;

class product {
    public :
        string name;
        int code;

        product(string name, int code){
            this->name = name;
            this->code = code;
        }

        product() {}

};

int main() {
    // 여기에 코드를 작성해주세요.

    product products[2];

    products[0].name = "codetree";
    products[0].code = 50;

    cin >> products[1].name >> products[1].code;

    for(int i = 0; i < 2; i++){
        cout << "product " << products[i].code << " is " << products[i].name << endl;
    }

    return 0;
}