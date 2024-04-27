#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, answer = 0;
    int arr[10][2];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                int stack[101] = {};
                bool state = true;
                for(int a = 0; a < n; a++){
                    if(a == i || a == j || a == k)
                        continue;

                    for(int x = arr[a][0]; x <= arr[a][1]; x++){
                        stack[x] += 1;
                    }
                }
                for(int x = 0; x < 101; x++){
                    if(stack[x] != 1 && stack[x] != 0){
                        state = false;
                    }
                }

                if(state == true){
                    answer++;
                }
            }   
        }
    }

    cout << answer;


    return 0;
}