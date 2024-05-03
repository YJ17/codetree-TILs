#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int add[1000];
    int answer[1001];

    cin >> n;

    for(int i = 0; i < n - 1; i++){
        cin >> add[i];
    }

    for(int s = 1; s <= n; s++){
        int temp[1001] = {};
        int num[1001] = {};
        int t_index = 0;
        temp[t_index++] = s;
        num[s] = 1;
        for(int i = 0; i < n - 1; i++){
            if(add[i] > temp[t_index - 1]){
                num[add[i] - temp[t_index - 1]] = 1;
                temp[t_index++] = add[i] - temp[t_index - 1];
            }
            else {
                num[temp[t_index - 1] - add[i]] = 1;
                temp[t_index++] = temp[t_index - 1] - add[i];
            }
        }

        bool state = true;
        for(int i = 1; i <= n; i++){
            if(num[i] == 0)
                state = false;
        }

        if(state == true){
            for(int i = 0; i < n; i++){
                cout << temp[i] << " ";
            }
            break;
        }
    }

    return 0;
}