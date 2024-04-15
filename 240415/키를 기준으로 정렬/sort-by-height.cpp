#include <iostream>
#include <algorithm>

using namespace std;

class People {
    public :
        string name;
        int hight, weight;

        People(string name, int hight, int weight){
            this->name = name;
            this->hight = hight;
            this->weight = weight;
        }

        People() {}
};

bool cmp(const People &a, const People &b){
    return a.hight < b.hight;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    People peoples[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> peoples[i].name >> peoples[i].hight >> peoples[i].weight;
    }

    sort(peoples, peoples + n, cmp);

    for(int i = 0; i < n; i++){
        cout << peoples[i].name << " " << peoples[i].hight << " " << peoples[i].weight << endl;
    }


    return 0;
}