#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int t, a, b, answer = 0;
    int x[101];
    char alpha[101];

    cin >> t >> a >> b;

    for(int i = 0; i < t; i++){
        cin >> alpha[i];
        cin >> x[i];
    }

    for(int i = a; i <= b; i++){
        int d1 = 2000;
        int d2 = 2000;
        for(int j = 0; j < t; j++){
            int maxd = max(x[j], i);
            int mind = min(x[j], i);
            if(alpha[j] == 'S'){
                d1 = min(d1, maxd - mind);
            }
            else {
                d2 = min(d2, maxd - mind);
            }
        }
        if(d1 <= d2){
            answer++;
        }
    }

    cout << answer;


    return 0;
}