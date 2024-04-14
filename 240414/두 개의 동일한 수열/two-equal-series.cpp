#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int a[101];
    int b[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    int j = 0;
    for(j; j < n; j++){
        if(a[j] != b[j]){
            cout << "No";
            break;
        }
    }

    if(j == n){
        cout << "Yes";
    }

    return 0;
}