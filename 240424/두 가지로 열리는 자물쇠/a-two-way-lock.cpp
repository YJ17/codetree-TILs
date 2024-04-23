#include <iostream>
#include <algorithm>

using namespace std;

int n;

bool IsIn2(int x, int y){
    int sub1, sub2, min_sub;

    sub1 = n - x + y;

    sub2 = (x > y) ? x - y : y - x;

    min_sub = min(sub1, sub2);

    if(min_sub <= 2){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a1, b1, c1, a2, b2, c2, count1 = 0, count2 = 0, answer = 0;

    cin >> n >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(IsIn2(i, a1)){
                    count1++;
                }
                if(IsIn2(i, a2)){
                    count2++;
                }
                if(IsIn2(j, b1)){
                    count1++;
                }
                if(IsIn2(j, b2)){
                    count2++;
                }
                if(IsIn2(k, c1)){
                    count1++;
                }
                if(IsIn2(k, c2)){
                    count2++;
                }

                if(count1 == 3 || count2 == 3){
                    answer++;
                }
                count1 = 0;
                count2 = 0;
            }
        }
    }

    cout << answer;

    return 0;
}