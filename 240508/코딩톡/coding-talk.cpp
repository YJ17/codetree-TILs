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
        if(no_read_message[i] == 0){
            for(int j = 0; j < n; j++){
                answer[j] = 1;
            }
            break;
        }
        else if(i != 0 && no_read_message[i - 1] >= no_read_message[i]){
            int index = i;
            while(no_read_message[index - 1] >= no_read_message[index]){
                answer[send_person_list[index - 1] - 'A'] = 1;
                index--;
            }
        }
        answer[send_person_list[i] - 'A'] = 1;
    }

    for(int i = 0; i < n; i++){
        if(answer[i] == 0){
            cout << (char)(i + (int)'A') << " ";
        }
    }



    return 0;
}