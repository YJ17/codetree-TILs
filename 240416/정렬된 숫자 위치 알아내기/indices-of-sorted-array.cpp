#include <iostream>
#include <algorithm>

using namespace std;

class Int_arr {
    public :
        int input, number;

        Int_arr(int input, int number){
            this->input = input;
            this->number = number;
        }

        Int_arr() {}
};

bool cmp(const Int_arr &a, const Int_arr &b){
    if(a.input == b.input){
        return a.number < b.number;
    }
    return a.input < b.input;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Int_arr int_list[1001];
    Int_arr check_list[1001];
    int check[1001];

    cin >> n;

    for(int i = 0; i < n; i++){
       cin >> int_list[i].input;
       int_list[i].number = i + 1;
       check_list[i].input = int_list[i].input;
       check_list[i].number = i + 1;
    }

    sort(int_list, int_list + n, cmp);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(check_list[i].input == int_list[j].input && check_list[i].number == int_list[j].number){
                check[i] = j + 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << check[i] << " ";
    }

    return 0;
}