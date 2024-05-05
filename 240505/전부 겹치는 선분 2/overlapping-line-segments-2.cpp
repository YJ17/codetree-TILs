#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[101][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    bool state = false;
    for(int x = 0; x < n; x++){
        int min_end = 101;
        int max_start = -1;
        for(int i = 0; i < n; i++){
            if(i == x)
                continue;
            max_start = max(max_start, arr[i][0]);
            min_end = min(min_end, arr[i][1]);
        }
        if(min_end >= max_start){
            state = true;
        }
    }

    if(state){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}