#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, answer = -1;

    cin >> a >> b >> c;

    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            int sum = a * i + b * j;
            if(sum <= c){
                answer = max(answer, sum);
            }
        }
    }

    cout << answer;

    return 0;
}