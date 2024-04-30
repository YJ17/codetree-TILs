#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x, y, count = 0;

    cin >> x >> y;

    for(int i = x; i <= y; i++){
        string num = to_string(i);
        string comp = {};

        for(int j = (int)num.size() - 1; j >= 0; j--){
            comp += num[j];
        }

        if(comp == num){
            count++;
        }
    }

    cout << count;

    return 0;
}