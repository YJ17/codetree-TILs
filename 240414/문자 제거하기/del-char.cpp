#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string arr;
    int n;

    cin >> arr;

    while(arr.length() != 1){
        cin >> n;
        if(n >= arr.length()){
            arr.erase(arr.length() - 1, 1);
            cout << arr << endl;
        }
        else {
            arr.erase(n , 1);
            cout << arr << endl;
        }
    }

    return 0;
}