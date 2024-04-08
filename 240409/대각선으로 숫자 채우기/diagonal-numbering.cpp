#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int m;
    int arr[101][101] = {};
    int num = 1;
    int ci = 0;
    int cj = 0;
    int i = 0;
    int j = 0;

    scanf("%d %d", &n, &m);

    while(1){
        arr[i][j] = num;
        num++;
        if(i == n-1 && j == m-1){
            break;
        }

        if(j == 0 && i + 1 >= m){
            ci += 1;
            j = m-1;
            i = ci;
        }
        else if(j == 0){
            cj += 1;
            j = cj;
            i = 0;
        }
        else if(i == n-1 && cj + 1 == m){
            ci += 1;
            j = m-1;
            i = ci;
        }
        else if(i == n-1){
            cj += 1;
            j = cj;
            i = 0;
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