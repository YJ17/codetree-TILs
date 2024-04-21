#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_NUM 2000
#define OFFSET 1000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, tx, ty, sum = 0, min_d = INT_MAX;
    int x[MAX_NUM + 1];
    int y[MAX_NUM + 1];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tx >> ty;
        tx += OFFSET;
        ty += OFFSET;

        x[i] = tx;
        y[i] = ty;
    }

    for(int j = 1; j < n - 1; j++){
        int prex;
        int prey;
        for(int i = 0; i < n; i++){
            if(i == 0){
                prex = x[i];
                prey = y[i];
            }
            else if(i != j){
                int maxx = max(prex, x[i]);
                int maxy = max(prey, y[i]);
                int minx = min(prex, x[i]);
                int miny = min(prey, y[i]);
                
                int distence = (maxx - minx) + (maxy - miny);
                sum += distence;

                prex = x[i];
                prey = y[i];
            }
        }
        if(sum < min_d){
            min_d = sum;
        }
        sum = 0;
    }

    cout << min_d;

    return 0;
}