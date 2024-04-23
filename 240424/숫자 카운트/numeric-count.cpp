#include <iostream>
#include <algorithm>

using namespace std;

class List {
    public :
        int a, b, c, c1, c2;

        List(int a, int b, int c, int c1, int c2){
            this->a = a;
            this->b = b;
            this->c = c;
            this->c1 = c1;
            this->c2 = c2;
        }

    List() {}
};

List num_list[11];

bool q_check(int x, int y, int z, int q){
    int ch_c1 = 0, ch_c2 = 0;
    int xyz[3], comp[3];

    xyz[0] = x;
    xyz[1] = y;
    xyz[2] = z;

    comp[0] = num_list[q].a;
    comp[1] = num_list[q].b;
    comp[2] = num_list[q].c;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(comp[i] == xyz[j]){
                if(i == j){
                    ch_c1++;
                }
                else {
                    ch_c2++;
                }
            }
        }
    }

    if(ch_c1 == num_list[q].c1 && ch_c2 == num_list[q].c2){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, temp, val_num = 0, q_check_num = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        num_list[i].c = temp % 10;
        temp /= 10;
        num_list[i].b = temp % 10;
        temp /= 10;
        num_list[i].a = temp % 10;
        cin >> num_list[i].c1 >> num_list[i].c2;
    }

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            for(int k = 1; k <= 9; k++){
                for(int q = 0; q < n; q++){
                    if(q_check(i, j, k, q)){
                        q_check_num++;
                    }
                }
                if(q_check_num == n){
                    val_num++;
                }
                q_check_num = 0;
            }
        }
    }

    cout << val_num;

    return 0;
}