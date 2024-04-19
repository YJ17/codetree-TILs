#include <iostream>

using namespace std;

int n;
int dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0};
char grid[1001][1001];

int SetInit(int &x, int &y, int &d){
    if((double)d / n <= 1){
        x = 0;
        y = d - 1;
        return 0;
    }
    else if((double)d / n <= 2){
        x = (d - 1) % n;
        y = n - 1;
        return 2;
    }
    else if((double)d / n <= 3){
        x = n - 1;
        y = ((n - 1) - (d - 1) % n);
        return 3;
    }
    else {
        x = ((n - 1) - (d - 1) % n);
        y = 0;
        return 1;
    }
}

bool InRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int LazerOn(int i, int j, int dir){
    if(dir == 0){
        if(grid[i][j] == '/'){
            return 2;

        }
        else {
            return 1;
        }
    }
    else if(dir == 2){
         if(grid[i][j] == '/'){
            return 0;

        }
        else {
            return 3;
        }
 
    }
    else if(dir == 3){
         if(grid[i][j] == '/'){
            return 1;

        }
        else {
            return 2;
        }
    }
    else {
         if(grid[i][j] == '/'){
            return 3;

        }
        else {
            return 0;
        }
    }
}

int CountMov(int d){
    int dir, x = 0, y = 0;
    int count = 0;

    dir = SetInit(x, y, d);

    while(InRange(x, y)){
        dir = LazerOn(x, y, dir);
        count++;
        x += dx[dir];
        y += dy[dir];
    }

    return count;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int k;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    cin >> k;

    cout << CountMov(k);

    return 0;
}