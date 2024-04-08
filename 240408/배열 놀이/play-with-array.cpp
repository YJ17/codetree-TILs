#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int q;
    int a;
    int b;
    int s;
    int e;
    int arr[101] = {};
    int t;
    int count = 0;

    scanf("%d %d", &n, &q);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int j = 0; j < q; j++){
        scanf("%d ", &t);
        if(t == 1){
            scanf("%d", &a);
            printf("%d\n", arr[a-1]);
        }
        else if(t == 2){
            scanf("%d", &b);
            for(int k = 0; k < n; k++){
                if(arr[k] == b){
                    printf("%d\n", k+1);
                    count++;
                    break;
                }
            }
            if(count == 0){
                printf("0\n");
            }
        }
        else {
            scanf("%d %d", &s, &e);
            for(int v = s-1; v < e; v++){
                printf("%d ", arr[v]);
            }
            printf("\n");
        }
    }


    return 0;
}