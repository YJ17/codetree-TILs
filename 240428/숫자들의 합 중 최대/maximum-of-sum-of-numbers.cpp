#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x, y, sum = 0;

    cin >> x >> y;

    for(int i = x; i <= y; i++){
        int cal = 0, num = i;
        while(num != 0){
            cal += num % 10;
            num = num / 10;
        }
        sum = max(sum, cal);
    }

    cout << sum;

    return 0;
}