#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    char c;
    int arr[4] = {};

    for(int i = 0; i < 3; i++){
        scanf("%c %d\n", &c, &n);
        if(c == 'Y' && n >= 37){
            arr[0] += 1;
        }
        else if(c == 'N' && n >= 37){
            arr[1] += 1;
        }
        else if(c == 'Y' && n < 37){
            arr[2] += 1;
        }
        else {
            arr[3] += 1;
        }
    }

    for(int j = 0; j < 4; j++){
        printf("%d ", arr[j]);
    }

    if(arr[0] >= 2){
        printf("E");
    }




    return 0;
}