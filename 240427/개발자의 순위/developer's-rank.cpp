#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int k, n;
    int arr[10][20];
    int answer = 0;

    cin >> k >> n;

    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }


    for(int i = 1; i <= n; i++){
        int bottom[20] = {};
        for(int a = 0; a < k; a++){
            int index = -1;
            for(int b = 0; b < n; b++){
                if(i == arr[a][b]){
                    index = b;
                }

                if(index != -1 && b > index){
                    bottom[arr[a][b]] += 1;
                }
            }
        }
        
        for(int c = 1; c <= n; c++){
            if(bottom[c] == k){
                answer++;
            }
        }
    }

    cout << answer;

    return 0;
}