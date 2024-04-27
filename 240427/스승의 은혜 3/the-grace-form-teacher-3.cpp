#include <iostream>
#include <algorithm>

using namespace std;

class PresentFee{
    public :
        int present;
        int sendfee;

        PresentFee(int present, int sendfee){
            this->present = present;
            this->sendfee = sendfee;
        }

        PresentFee() {}
};

bool cmp(const PresentFee &a, const PresentFee &b){
    if((a.present + a.sendfee) == (b.present + b.sendfee)){
        if(((a.present/2) + a.sendfee) == ((b.present/2) + b.sendfee)){
            if(a.present == b.present){
                return a.sendfee < b.sendfee;
            }
            return a.present < b.present;
        }
        return ((a.present/2) + a.sendfee) < ((b.present/2) + b.sendfee);
    }
    return (a.present + a.sendfee) < (b.present + b.sendfee);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, b, answer = -1;
    PresentFee present_list[1500];


    cin >> n >> b;

    for(int i = 0; i < n; i++){
        cin >> present_list[i].present >> present_list[i].sendfee;
    }

    sort(present_list, present_list + n, cmp);

    for(int i = 0; i < n; i++){
        int sum = 0;
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                sum += present_list[j].present / 2;
            }
            else {
                sum += present_list[j].present;
            }

            sum += present_list[j].sendfee;

            if(sum <= b){
                count++;
            }
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}