#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 101;
    string arr;

    cin >> n >> arr;

    int len[101] = {};
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            string ori = arr;
            string sub = arr.substr(i, j);
            int count = 0;
            int pindex = 0;
            while((int)ori.size() != 0){
                int index = ori.find(sub);
                if(index != string::npos){
                    count++;
                    ori = ori.substr(index + 1, n);
                }
                else {
                    break;
                }
            }

            if(count != 1){
                len[(int)sub.size()] = 2;
            }
            else if(count == 1 && len[j] != 2){
                len[(int)sub.size()] = 1;
            }
        }
    }

    for(int i = 0; i < n + 1; i++){
        if(len[i] == 1){
            answer = min(answer, i);
        }
    }

    cout << answer;

    return 0;
}