#include <iostream>
#include <algorithm>

using namespace std;

class EatCheeseSec{
    public :
        int p_num[51] = {};
        int ch_num[51] = {};

        EatCheeseSec() {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, d, s, person, cheese, sec, answer = -1, index = 0;
    EatCheeseSec eat_list[101];
    int ache_list[101] = {};
    int cheese_list[51] = {};

    cin >> n >> m >> d >> s;

    for(int i = 0; i < d; i++){
        cin >> person >> cheese >> sec;
        eat_list[sec].p_num[index] = person;
        eat_list[sec].ch_num[index] = cheese;
        index++;
    }

    for(int i = 0; i < s; i++){
        cin >> person >> sec;
        ache_list[sec] = person;
    }

    for(int i = 1; i < 101; i++){
        if(ache_list[i] != 0){
            for(int j = 1; j < i; j++){
                for(int k = 0; k < 51; k++){
                    if(eat_list[j].p_num[k] == ache_list[i]){
                        cheese_list[eat_list[j].ch_num[k]] += 1;
                    }
                }
            }
        }
    }

    for(int i = 1; i <= m; i++){
        if(cheese_list[i] == s){
            int count = 0;
            int ache_person_list[51] = {};
            for(int j = 1; j < 101; j++){
                for(int k = 0; k < 51; k++){
                    if(eat_list[j].ch_num[k] == i){
                        ache_person_list[eat_list[j].p_num[k]] = 1;
                    }
                }
            }

            for(int j = 1; j <= n; j++){
                if(ache_person_list[j] == 1){
                    count++;
                }
            }

            answer = max(answer, count);
        }
    }



    cout << answer;

    return 0;
}