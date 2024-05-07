#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, p;
    char send_person_list[101];
    int no_read_message[101];
    int answer[27] = {};

    cin >> n >> m >> p;

    for(int i = 0; i < m; i++){
        cin >> send_person_list[i] >> no_read_message[i];
    }

    for(int i = p - 1; i < m; i++){
        answer[send_person_list[i] - 'A'] = 1;
    }

    for(int i = 0; i < n; i++){
        if(answer[i] == 0){
            cout << (char)(i + (int)'A') << " ";
        }
    }



    return 0;
}