#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        string name;
        int kor, eng, math;

        Student(string name, int kor, int eng, int math){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }

        Student () {}
};

bool cmp(const Student &a, const Student &b){
    if(a.kor == b.kor){
        if(a.eng == b.eng){
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Student student_list[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> student_list[i].name >> student_list[i].kor >> student_list[i].eng >> student_list[i].math;
    }

    sort(student_list, student_list + n, cmp);

    for(int i = 0; i < n; i++){
        cout << student_list[i].name << " " << student_list[i].kor << " " << student_list[i].eng << " " << student_list[i].math << endl;
    }

    return 0;
}