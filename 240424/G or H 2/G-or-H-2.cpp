#include <iostream>
#include <algorithm>

using namespace std;

class People {
    public :
        int index;
        char alpha;

        People(int index, char alpha){
            this->index = index;
            this->alpha = alpha;
        }

        People() {}
};

bool cmp(const People &a, const People &b){
    return a.index < b.index;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, max_len = 0, gc = 0, hc = 0;
    People p_list[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p_list[i].index >> p_list[i].alpha;
    }

    sort(p_list, p_list + n, cmp);

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                if(p_list[k].alpha == 'G'){
                    gc++;
                }
                else {
                    hc++;
                }
            }
            if(gc == hc){
                max_len = max(max_len, p_list[j].index - p_list[i].index);
            }
            gc = hc = 0;
        }
    }

    cout << max_len;

    return 0;
}