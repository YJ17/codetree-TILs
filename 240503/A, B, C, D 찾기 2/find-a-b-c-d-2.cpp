#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[15];
    int answer[4] = {};

    for(int i = 0; i < 15; i++){
        cin >> arr[i];
    }

    sort(arr, arr + 15);


    for(int a = 0; a < 15; a++){
        for(int b = 0; b < 15; b++){
            for(int c = 0; c < 15; c++){
                for(int d = 0; d < 15; d++){
                    int abcd[4] = {};
                    int check[15] = {};
                    if(a == b || a == c || a == d || b == c || b == d || c == d){
                        continue;
                    }

                    abcd[0] = arr[a];
                    abcd[1] = arr[b];
                    abcd[2] = arr[c];
                    abcd[3] = arr[d];

                    check[a] = 1;
                    check[b] = 1;
                    check[c] = 1;
                    check[d] = 1;

                    for(int i = 1; i < 15; i++){
                        if(arr[i] == abcd[0] + abcd[1] + abcd[2] + abcd[3]){
                            check[i] = 1;
                        }
                    }

                    for(int x = 0; x < 3; x++){
                        for(int y = x + 1; y < 4; y++){
                            for(int i = 0; i < 15; i++){
                                if(arr[i] == abcd[x] + abcd[y]){
                                    check[i] = 1;
                                }   
                            }
                        }
                    }

                    for(int x = 0; x < 2; x++){
                        for(int y = x + 1; y < 3; y++){
                            for(int z = y + 1; z < 4; z++){
                                for(int i = 0; i < 15; i++){
                                    if(arr[i] == abcd[x] + abcd[y] + abcd[z]){
                                        check[i] = 1;
                                    }   
                                }
                            }
                        }
                    }

                    bool state = true;
                    for(int i = 0; i < 15; i++){
                        if(check[i] != 1)
                            state = false;
                    }

                    if(state == true){
                        sort(abcd, abcd + 4);
                        for(int i = 0; i < 4; i++){
                            answer[i] = abcd[i];
                        }
                    }

                }
            }
        }
    }

    for(int i = 0; i < 4; i++){
        cout << answer[i] << " ";
    }

    return 0;
}