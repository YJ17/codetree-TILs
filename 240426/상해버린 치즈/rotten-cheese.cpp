#include <iostream>
#include <algorithm>

#define MAXINDEX 50000

using namespace std;

class EatCheeseSec{
    public :
        int p_num[MAXINDEX + 1] = {};
        int ch_num[MAXINDEX + 1] = {};

        EatCheeseSec() {}
};

class AcheSec{
    public :
        int p_num[51] = {};

    AcheSec() {}
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, d, s, person, cheese, sec, answer = -1, index = 0;
    EatCheeseSec eat_list[101];
    AcheSec ache_list[101];
    int cheese_list[51] = {};

    cin >> n >> m >> d >> s;

    for(int i = 0; i < d; i++){
        cin >> person >> cheese >> sec;
        eat_list[sec].p_num[index] = person;
        eat_list[sec].ch_num[index] = cheese;
        index++;
    }

    index = 0;
    for(int i = 0; i < s; i++){
        cin >> person >> sec;
        ache_list[sec].p_num[index] = person;
        index++;
    }

    for(int i = 1; i < 101; i++){
        for(int a = 0; a < 51; a++){
            if(ache_list[i].p_num[a] != 0){
                int already_eat[51] = {};
                for(int j = 1; j < i; j++){
                    for(int k = 0; k < MAXINDEX + 1; k++){
                        if(eat_list[j].p_num[k] == ache_list[i].p_num[a] && already_eat[eat_list[j].ch_num[k]] == 0){
                            cheese_list[eat_list[j].ch_num[k]] += 1;
                            already_eat[eat_list[j].ch_num[k]] = 1;
                        }
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
                for(int k = 0; k < MAXINDEX + 1; k++){
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