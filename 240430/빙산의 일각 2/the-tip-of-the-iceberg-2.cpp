#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 0;
    int hight[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> hight[i];
    }

    for(int i = 1; i < 1001; i++){
        int count = 0;
        bool state = false;
        for(int j = 1; j < n; j++){
            if(hight[j] > i){
                if(state != true){
                    state = true;
                    count++;
                }
            }
            else {
                if(state != false){
                    state = false;
                }
            }
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}