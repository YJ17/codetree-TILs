#include <iostream>

using namespace std;

bool Inrange(int x, int y){
    return x <= 2 && x >= 0 && y <= 2 && y >= 0;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1}, dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
    int n, index = 0, answer = 0;
    int arr[9];
    int tictacto[3][3];

    for(int j = 0; j < 3; j++){
        cin >> n;
        int num[3];
        for(int i = 0; i < 3; i++){
            num[i] = n % 10;
            n /= 10;
        }
        for(int i = 2; i >= 0; i--){
            arr[index++] = num[i];
        } 
    }

    index = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tictacto[i][j] = arr[index++];
        }
    }

    for(int a = 1; a < 9; a++){
        for(int b = a + 1; b < 10; b++){
            bool state = false;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int tx = i;
                    int ty = j;
                    for(int d = 0; d < 8; d++){
                        int count = 0;
                        while(Inrange(tx, ty)){
                            if(tictacto[tx][ty] == a || tictacto[tx][ty] == b){
                                count++;
                            }
                            tx += dx[d];
                            ty += dy[d];
                        }
                        if(count == 3){
                            state = true;
                        }
                        tx = i;
                        ty = j;
                    }
                }
            }
            if(state == true){
                answer++;
            }
        }
    }

    cout << answer;

    return 0;
}