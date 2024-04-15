#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        string name;
        int height;
        double weight;

        Student(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Student() {}
};

bool cmp_hei(const Student &a, const Student &b){
    return a.height > b.height;
}

bool cmp_name(const Student &a, const Student &b){
    return a.name < b.name;
}

int main() {
    // 여기에 코드를 작성해주세요.

    Student students[5];

    for(int i = 0 ; i < 5; i++){
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    sort(students, students + 5, cmp_name);

    cout << "name" << endl;
    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    sort(students, students + 5, cmp_hei);

    cout << endl << "height" << endl;
    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    return 0;
}