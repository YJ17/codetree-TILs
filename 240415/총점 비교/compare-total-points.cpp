#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        string name;
        int s1, s2, s3;

        Student(string name, int s1, int s2, int s3){
            this->name = name;
            this->s1 = s1;
            this->s2 = s2;
            this->s3 = s3;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b){
    return a.s1 + a.s2 + a.s3 < b.s1 + b.s2 + b.s3;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Student student[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> student[i].name >> student[i].s1 >> student[i].s2 >> student[i].s3;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++){
        cout << student[i].name << " " << student[i].s1 << " " << student[i].s2 << " " << student[i].s3 << " " << endl;
    }

    return 0;
}