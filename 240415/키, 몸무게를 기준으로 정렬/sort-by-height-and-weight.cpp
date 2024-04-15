#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        string name;
        int height, weight;

        Student(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Student student_list[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> student_list[i].name >> student_list[i].height >> student_list[i].weight;
    }

    sort(student_list, student_list  + n, cmp);

    for(int i = 0; i < n; i++){
        cout << student_list[i].name << " " << student_list[i].height << " " << student_list[i].weight << endl;
    }

    return 0;
}