#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, min_val = INT_MAX;
    int arr[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int maxx = max(arr[i][0], arr[j][0]);
            int maxy = max(arr[i][1], arr[j][1]);
            int minx = min(arr[i][0], arr[j][0]);
            int miny = min(arr[i][1], arr[j][1]);

            min_val = min(min_val, (maxx-minx) * (maxx-minx) + (maxy-miny) * (maxy-miny));
        }
    }

    cout << min_val;

    return 0;
}