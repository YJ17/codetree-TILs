#include <iostream>

using namespace std;

class Tile {
    public :
        int cb, cw;
        char color;

        Tile(int cb = 0, int cw = 0, char color = ' '){
            this->cb = cb;
            this->cw = cw;
            this->color = color;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.


    int n, m, index = 5000, count_b = 0, count_w = 0, count_g = 0;
    Tile tile[10005];
    char d;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m >> d;

        if(d == 'R'){
            for(int i = 1; i <= m; i++){
                
                if(tile[index].color != 'G'){
                    tile[index].color = 'B';
                    tile[index].cb += 1;
                }

                if(tile[index].cb >= 2 && tile[index]. cw >= 2){
                    tile[index].color = 'G';
                }

                if(i != m){
                    index++;
                }
            }
        }
        else {
            for(int i = 1; i <= m; i++){
                if(tile[index].color != 'G'){
                    tile[index].color = 'W';
                    tile[index].cw += 1;
                }

                if(tile[index].cb >= 2 && tile[index]. cw >= 2){
                    tile[index].color = 'G';
                }

                if(i != m){
                    index--;
                }
            }
        }
    }

    for(int i = 0; i < 10000; i++){
        if(tile[i].color == 'B'){
            count_b++;
        }
        else if(tile[i].color == 'W'){
            count_w++;
        }
        else if(tile[i].color == 'G'){
            count_g++;
        }
    }


    cout << count_w << " " << count_b << " " << count_g;

    return 0;
}