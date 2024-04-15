#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        int heignt, weight, number;

        Student(int heignt, int weight, int number){
            this->heignt = heignt;
            this->weight = weight;
            this->number = number;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b){
    if(a.heignt == b.heignt){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.heignt > b.heignt;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Student student_list[1001];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> student_list[i].heignt >> student_list[i].weight;
        student_list[i].number = i+1;
    }

    sort(student_list, student_list + n, cmp);

    for(int i = 0; i < n; i++){
        cout << student_list[i].heignt << " " << student_list[i].weight << " " << student_list[i].number << endl;
    }

    return 0;
}