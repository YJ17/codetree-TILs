#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a;
    int num = 0, max = INT_MIN;

    cin >> a;

    for(int j = 1; j < (int)a.size(); j++){
        if(a[j] == '1'){
            a[j] = '0';
        }
        else {
            a[j] = '1';
        }

        for(int i = 0; i < (int)a.size(); i++){
            num = num * 2 + a[i] - '0';
        }
        if(max < num){
            max = num;
        }
        num = 0;

        if(a[j] == '1'){
            a[j] = '0';
        }
        else {
            a[j] = '1';
        }
    }

  
    cout << max;
    

    return 0;
}