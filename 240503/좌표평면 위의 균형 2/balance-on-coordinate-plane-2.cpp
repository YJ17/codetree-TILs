#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 100;
    int xy[101][2];
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> xy[i][0] >> xy[i][1];
    }

    for(int i = 0; i < 101; i+=2){
        for(int j = 0; j < 101; j+=2){
            int area1 = 0, area2 = 0, area3 = 0, area4 = 0;

            for(int k = 0; k < n; k++){
                if(xy[k][0] < i && xy[k][1] < j){
                    area4++;
                }
                
                if(xy[k][0] > i && xy[k][1] > j){
                    area2++;
                }

                if(xy[k][0] < i && xy[k][1] > j){
                    area3++;
                }

                if(xy[k][0] > i && xy[k][1] < j){
                    area1++;
                }
            }

            int m = max({area1, area2, area3, area4});

            answer = min(answer, m);
        }
    }

    cout << answer;

    return 0;
}