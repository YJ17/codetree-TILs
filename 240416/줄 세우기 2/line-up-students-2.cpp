#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public :
        int h, w, n;

        Student(int h, int w, int n){
            this->h = h;
            this->w = w;
            this->n = n;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b){
    if(a.h == b.h){
        return a.w > b.w;
    } 
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    Student student_list[1000];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> student_list[i].h >> student_list[i].w;
        student_list[i].n = i + 1;
    }

    sort(student_list, student_list + n, cmp);

    for(int i = 0; i < n; i++){
        cout << student_list[i].h << " " << student_list[i].w << " " << student_list[i].n << endl;
    }

    return 0;
}