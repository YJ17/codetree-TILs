#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int count = 0;
    string quest;

    cin >> quest;

    for(int i = 0 ; i < (int)quest.size()-3; i++){
       for(int j = i + 2; j < (int)quest.size()-1; j++){
            if(quest[i] == '(' && quest[i + 1] == '(' && quest[j] == ')' && quest[j + 1] == ')'){
                count++;
            }
       }
    }
    
    cout << count;

    return 0;
}