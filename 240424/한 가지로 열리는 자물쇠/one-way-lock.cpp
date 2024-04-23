#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, a, b, c, count = 0, suba, subb, subc;

    cin >> n >> a >> b >> c;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                suba = (a > i) ? a - i : i - a;
                subb = (b > j) ? b - j : j - b;
                subc = (c > k) ? c - k : k - c;

                if(suba <= 2 || subb <= 2 || subc <= 2){
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}