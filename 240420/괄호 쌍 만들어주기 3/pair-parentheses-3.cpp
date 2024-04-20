#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int count = 0;
    string quest;

    cin >> quest;

    for(int i = 0; i < (int)quest.size() - 1; i++){
        if(quest[i] == '('){
            for(int j = i + 1; j < (int)quest.size(); j++){
                if(quest[j] == ')'){
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}