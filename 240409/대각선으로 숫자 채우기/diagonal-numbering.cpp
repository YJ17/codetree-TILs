#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int m;
    int arr[101][101] = {};
    int num = 1;
    int c = 0;
    int i = 0;
    int j = 0;

    scanf("%d %d", &n, &m);

    while(1){
        arr[i][j] = num;
        num++;
        if(i == n-1 && j == m-1){
            break;
        }

        if(j == 0 && i < n-1 && c == 0){
            if(i + 1 == m-1){
                c += 1;
            }
            j = i+1;
            i = 0;
        }
        else if(j == 0 && i < n-1 && c != 0){
               j = m-1;
            if(c >= n){
                c = n-1;
            }
            i = c;
            c += 1;
        } else if (i == n-1){
            j = m-1;
            if(c >= n){
                c = n-1;
            }
            i = c;
            c += 1;
        }
        else {
            j -= 1;
            i += 1;
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }





    return 0;
}