#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x, y, count = 0;

    cin >> x >> y;

    for(int i = x; i <= y; i++){
        string num = to_string(i);
        int mid = (int)num.size() / 2;
        bool state = false;
        int index = (int)num.size() - 1;
        for(int j = 0; j < mid; j++){
            if(num[j] == num[index]){
                state = true;
            }
            else {
                state = false;
            }
            index--;
        }

        if(state == true){
            count++;
        }
    }

    cout << count;

    return 0;
}