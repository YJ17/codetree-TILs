#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int x, y, answer = 0;

    cin >> x >> y;

    for(int i = x; i <= y; i++){
        int diff[10] = {};
        int count = 0;
        int num = i;
        while(num != 0){
            diff[num % 10] = 1;
            num /= 10;
        }

        for(int i = 0; i < 10; i++){
            if(diff[i] == 1){
                count++;
            }

        }

        if(count == 2){
            answer++;
        }
    }

    cout << answer;

    return 0;
}