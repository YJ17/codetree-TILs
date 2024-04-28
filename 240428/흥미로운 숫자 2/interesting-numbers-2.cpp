#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int x, y, answer = 0;

    cin >> x >> y;

    for(int i = x; i <= y; i++){
        int diff[10] = {};
        int cn = 0, c1 = 0;
        int num = i;
        while(num != 0){
            diff[num % 10] += 1;
            num /= 10;
        }

        for(int i = 0; i < 10; i++){
            if(diff[i] != 0){
                cn++;
            }
            if(diff[i] == 1){
                c1++;
            }
        }

        if(cn == 2 && c1 == 1){
            answer++;
        }
    }

    cout << answer;

    return 0;
}